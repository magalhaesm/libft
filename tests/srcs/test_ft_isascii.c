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

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_ascii_character),
	};
	return RUN_GROUP(tests);
}
