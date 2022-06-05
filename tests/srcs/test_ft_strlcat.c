#include "../utils/tester.h"
#include <bsd/string.h>

void	test_concatenate_string_having_enough_space(void)
{
	const char	test[] = " ft_strlcat";
	char	result[100] = "testing";
	char	expected[100] = "testing";
	ft_strlcat(result, test, sizeof(result));
	strlcat(expected, test, sizeof(expected));
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_concatenate_string_without_enough_space(void)
{
	const char	test[] = " ft_strlcat";
	char	result[15] = "testing";
	char	expected[15] = "testing";
	ft_strlcat(result, test, 15);
	strlcat(expected, test, 15);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_return_the_size_of_the_pretended_string(void)
{
	const char	test[] = " ft_strlcat";
	char	result[15] = "testing";
	char	expected[15] = "testing";
	size_t	res_ret;
	size_t	exp_ret;

	res_ret = ft_strlcat(result, test, 15);
	exp_ret = strlcat(expected, test, 15);
	ASSERT_EXPR(res_ret == exp_ret);
}

void	test_handle_destination_with_no_space(void)
{
	const char	test[] = " ft_strlcat";
	char	result[7] = "testing";
	char	expected[7] = "testing";
	size_t	res_ret;
	size_t	exp_ret;

	res_ret = ft_strlcat(result, test, sizeof(result));
	exp_ret = strlcat(expected, test, sizeof(expected));
	ASSERT_EXPR(res_ret == exp_ret);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_concatenate_string_having_enough_space),
		UNIT_TEST(test_concatenate_string_without_enough_space),
		UNIT_TEST(test_return_the_size_of_the_pretended_string),
		UNIT_TEST(test_handle_destination_with_no_space),
	};
	return RUN_GROUP(tests);
}
