#include "../utils/tester.h"
#include <stdlib.h>

void	test_convert_negative_signed_integers(void)
{
	char	*test = "-42";
	int		result;
	int		expected;

	result = ft_atoi(test);
	expected = atoi(test);
	ASSERT_EXPR(result == expected);
}

void	test_convert_positive_signed_integers(void)
{
	char	*test = "+42";
	int		result;
	int		expected;

	result = ft_atoi(test);
	expected = atoi(test);
	ASSERT_EXPR(result == expected);
}

void	test_convert_positive_unsigned_integers(void)
{
	char	*test = "42";
	int		result;
	int		expected;

	result = ft_atoi(test);
	expected = atoi(test);
	ASSERT_EXPR(result == expected);
}

void	test_is_space(void)
{
	char	*test = "  \t\n\v\f\r+42";
	int		result;
	int		expected;

	result = ft_atoi(test);
	expected = atoi(test);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_convert_negative_signed_integers),
		UNIT_TEST(test_convert_positive_signed_integers),
		UNIT_TEST(test_convert_positive_unsigned_integers),
		UNIT_TEST(test_is_space),
	};
	return RUN_GROUP(tests);
}
