#include "../utils/tester.h"
#include "ctype.h"

static void	test_decimal_digit(void)
{
	int	result;
	int	expected;

	result = ft_isdigit('0');
	expected = isdigit('0');
	ASSERT_EXPR(result && expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_decimal_digit),
	};
	RUN_GROUP(tests);
}
