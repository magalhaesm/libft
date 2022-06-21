#ifndef RUNNER_H
# define RUNNER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

# define RED					"\033[31m"
# define RESET					"\033[m"
# define BOLD(string)			"\033[1m" string "\033[0m"
# define BG_RED(string)			"\033[7;31m" string "\033[0m"
# define FG_RED(string)			"\033[1;31m" string "\033[0m"
# define BG_GREEN(string)		"\033[7;32m" string "\033[0m"
# define FG_GREEN(string)		"\033[1;32m" string "\033[0m"

# define FAILED					BG_RED(" FAIL ")
# define PASSED					BG_GREEN(" PASS ")

# define FAIL_SIGN				FG_RED("  •")
# define PASS_SIGN				FG_GREEN("  ✓")

# define RUN_GROUP(tests)		run_units(tests, sizeof(tests)/sizeof(tests[0]), __FILE__)
# define UNIT_TEST(function)	{.func=function, .name=#function}
# define ASSERT_EXPR(condition)	test_assert(condition, __LINE__)

typedef struct	s_unit_test
{
	char		*name;
	void		(*func)(void);
	int			line;
	int			failed;
}				t_unit_test;

typedef struct	s_session
{
	int			fails;
	t_unit_test	*tests;
	int			n_tests;
	char		*filename;
}				t_session;

void	test_assert(int condition, int line);
void	test_runner(t_unit_test *new_test);
int		run_units(t_unit_test tests[], int num_tests, char *filename);
int		print_result(t_session *session);

void	free_arr(char **arr);
int		mktmpfd(void);
char	*get_output(int fd);

#endif
