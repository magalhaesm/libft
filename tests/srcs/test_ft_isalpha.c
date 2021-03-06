#include "../utils/tester.h"
#include "ctype.h"

static void	test_printable_character(void)
{
	int	result;
	int	expected;

	result = ft_isalpha('a');
	expected = isalpha('a');
	ASSERT_EXPR(result && expected);
}

static void	test_non_printable_character(void)
{
	int	result;
	int	expected;

	result = ft_isalpha(27);
	expected = isalpha(27);
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
