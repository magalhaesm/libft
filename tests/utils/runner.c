#include "runner.h"

t_unit_test *g_test;
char	g_output[1024];
char	tmpfilename[] = "test.output";

void	test_assert(int condition, int line)
{
	if (g_test->line)
			return;
	if (condition == true)
		g_test->failed = false;
	else
	{
		g_test->failed = true;
		g_test->line = line;
	}
}

void	test_runner(t_unit_test *test)
{
	g_test = test;
	test->func();
}

int		run_units(t_unit_test tests[], int n_tests, char *filename)
{
	int		fails;

	fails = 0;
	for (int i = 0; i < n_tests; i++)
	{
		test_runner(&tests[i]);
		if (tests[i].failed)
			fails++;
	}
	t_session session = {
		.fails = fails,
		.tests = tests,
		.n_tests = n_tests,
		.filename = filename,
	};
	return print_result(&session);
}

// TODO: no modo compacto, exibir só o nome da função: ft_isalpha
static void	p_res(t_unit_test *test)
{
	if (test->failed)
		printf("%s %s%s at line %d%s\n", FAIL_SIGN, RED, test->name, test->line, RESET);
	else
		printf("%s %s\n", PASS_SIGN, test->name);
}

int		print_result(t_session *s)
{
	if (s->fails)
		printf("\n%s %s\n", FAILED, s->filename);
	else
		printf("\n%s %s\n", PASSED, s->filename);
	for (int i = 0; i < s->n_tests; i++)
	{
		p_res(&s->tests[i]);
	}
	return (s->fails);
}

// ---------- HELPERS ----------

void	free_arr(char **arr)
{
	for (int i = 0; arr[i] != NULL; ++i)
		free(arr[i]);
	free(arr);
}

int	mktmpfd(void)
{
	return (open(tmpfilename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR));
}

char	*get_output(int fd)
{
	struct stat	buffer;

	lseek(fd, SEEK_SET, 0);
	fstat(fd, &buffer);
	read(fd, &g_output, buffer.st_size);
	g_output[buffer.st_size] = '\0';
	remove(tmpfilename);
	return (g_output);
}
