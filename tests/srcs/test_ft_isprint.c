#include "../utils/tester.h"
#include <ctype.h>

void	test_printable_character(void)
{
	int	result;
	int	expected;

	result = ft_isprint(32);
	expected = isprint(32);
	ASSERT_EXPR(result && expected);
}

void	test_non_printable_character(void)
{
	int	result;
	int	expected;

	result = ft_isprint(127);
	expected = isprint(127);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_printable_character),
		UNIT_TEST(test_non_printable_character),
	};
	return RUN_GROUP(tests);
}
