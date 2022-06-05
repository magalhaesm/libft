#include "../utils/tester.h"
#include "ctype.h"

void	test_decimal_digit(void)
{
	int	result;
	int	expected;

	result = ft_isdigit('0');
	expected = isdigit('0');
	ASSERT_EXPR(result && expected);
}

void	test_non_digit(void)
{
	int	result;
	int	expected;

	result = ft_isdigit('A');
	expected = isdigit('A');
	ASSERT_EXPR((result || expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_decimal_digit),
		UNIT_TEST(test_non_digit),
	};
	return RUN_GROUP(tests);
}
