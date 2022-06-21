#include "../utils/tester.h"
#include <string.h>

char	capitalize(unsigned int i, char c)
{
	(void)i;
	return (c - 32);
}

void	test_iteration(void)
{
	char	teste[] = "test";
	char	*result = ft_strmapi(teste, capitalize);
	char	*expected = "TEST";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

void	test_empty_string(void)
{
	char	teste[] = "";
	char	*result = ft_strmapi(teste, capitalize);
	char	*expected = "";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_iteration),
		UNIT_TEST(test_empty_string),
	};
	return RUN_GROUP(tests);
}
