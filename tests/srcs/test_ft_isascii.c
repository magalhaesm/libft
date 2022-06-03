#include "../utils/tester.h"
#include "ctype.h"

void	test_ascii_character(void)
{
	int	result;
	int	expected;

	result = ft_isascii('a');
	expected = isascii('a');
	ASSERT_EXPR(result && expected);
}

void	test_non_ascii_character(void)
{
	int	result;
	int	expected;

	result = ft_isascii(227); // 227 = ã
	expected = isascii(227);
	ASSERT_EXPR((result && expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_ascii_character),
		UNIT_TEST(test_non_ascii_character),
	};
	return RUN_GROUP(tests);
}
