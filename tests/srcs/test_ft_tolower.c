#include "../utils/tester.h"
#include "ctype.h"

void	test_uppercase_character(void)
{
	int	result;
	int	expected;

	result = ft_tolower('A');
	expected = tolower('A');
	ASSERT_EXPR(result == expected);
}

void	test_lowercase_character(void)
{
	int	result;
	int	expected;

	result = ft_tolower('a');
	expected = tolower('a');
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_uppercase_character),
		UNIT_TEST(test_lowercase_character),
	};
	return RUN_GROUP(tests);
}
