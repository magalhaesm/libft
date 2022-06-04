#include "../utils/tester.h"
#include <string.h>
#include <bsd/string.h>

void	test_copy_string(void)
{
	char	*test = "teste";
	char	result[10];
	char	expected[10];
	ft_strlcpy(result, test, 5);
	strlcpy(expected, test, 5);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_return_length(void)
{
	char	*test = "teste";
	char	result[10];
	char	expected[10];
	size_t	ret_res = ft_strlcpy(result, test, 5);
	size_t	ret_exp = strlcpy(expected, test, 5);
	ASSERT_EXPR(ret_res == ret_exp);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_copy_string),
		UNIT_TEST(test_return_length),
	};
	return RUN_GROUP(tests);
}
