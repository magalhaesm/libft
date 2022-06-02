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

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_uppercase_character),
	};
	RUN_GROUP(tests);
}
