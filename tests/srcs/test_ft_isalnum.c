#include "../utils/tester.h"
#include "ctype.h"

void	test_alphabetic_character(void)
{
	int	result;
	int	expected;

	result = ft_isalnum('a');
	expected = isalnum('a');
	ASSERT_EXPR(result && expected);
}

void	test_numeric_character(void)
{
	int	result;
	int	expected;

	result = ft_isalnum('0');
	expected = isalnum('0');
	ASSERT_EXPR(result && expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_alphabetic_character),
		UNIT_TEST(test_numeric_character),
	};
	return RUN_GROUP(tests);
}
