#include "../utils/tester.h"
#include <stdlib.h>

typedef struct	s_test
{
	char	*value;
	int	result;
	int	expected;
}	t_test;

t_test t;

void	test_convert_negative_signed_integers(void)
{
	t.value = "-42";
	t.result = ft_atoi(t.value);
	t.expected = atoi(t.value);
	ASSERT_EXPR(t.result == t.expected);
}

void	test_convert_positive_signed_integers(void)
{
	t.value = "+42";
	t.result = ft_atoi(t.value);
	t.expected = atoi(t.value);
	ASSERT_EXPR(t.result == t.expected);
}

void	test_convert_positive_unsigned_integers(void)
{
	t.value = "42";
	t.result = ft_atoi(t.value);
	t.expected = atoi(t.value);
	ASSERT_EXPR(t.result == t.expected);
}

void	test_is_space(void)
{
	t.value = "  \t\n\v\f\r+42";
	t.result = ft_atoi(t.value);
	t.expected = atoi(t.value);
	ASSERT_EXPR(t.result == t.expected);
}

void	test_convert_min_integer_value(void)
{
	t.value = "-2147483648";
	t.result = ft_atoi(t.value);
	t.expected = atoi(t.value);
	ASSERT_EXPR(t.result == t.expected);
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
