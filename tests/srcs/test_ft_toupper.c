#include "../utils/tester.h"
#include "ctype.h"

static void	test_uppercase_character(void)
{
	int	result;
	int	expected;

	result = ft_toupper('A');
	expected = toupper('A');
	ASSERT_EXPR(result == expected);
}

static void	test_lowercase_character(void)
{
	int	result;
	int	expected;

	result = ft_toupper('a');
	expected = toupper('a');
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_uppercase_character),
		UNIT_TEST(test_lowercase_character),
	};
	RUN_GROUP(tests);
}
