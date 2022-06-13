#include "../utils/tester.h"
#include <stdlib.h>

void	test_convert_negative_signed_integers(void)
{
	char	*value = "-42";
	int		result = ft_atoi(value);
	int 	expected = atoi(value);
	ASSERT_EXPR(result == expected);
}

void	test_convert_positive_signed_integers(void)
{
	char	*value = "+42";
	int		result = ft_atoi(value);
	int 	expected = atoi(value);
	ASSERT_EXPR(result == expected);
}

void	test_convert_positive_unsigned_integers(void)
{
	char	*value = "42";
	int		result = ft_atoi(value);
	int 	expected = atoi(value);
	ASSERT_EXPR(result == expected);
}

void	test_is_space(void)
{
	char	*value = "  \t\n\v\f\r+42";
	int		result = ft_atoi(value);
	int 	expected = atoi(value);
	ASSERT_EXPR(result == expected);
}

void	test_convert_min_integer_value(void)
{
	char	*value = "-2147483648";
	int		result = ft_atoi(value);
	int 	expected = atoi(value);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_convert_negative_signed_integers),
		UNIT_TEST(test_convert_positive_signed_integers),
		UNIT_TEST(test_convert_positive_unsigned_integers),
		UNIT_TEST(test_is_space),
		UNIT_TEST(test_convert_min_integer_value),
	};
	return RUN_GROUP(tests);
}
