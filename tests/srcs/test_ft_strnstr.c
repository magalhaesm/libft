#include "../utils/tester.h"
#include <bsd/string.h>

void	test_locate_the_first_occurrence_of_a_char(void)
{
	const char	*large = "Foo Bar Baz";
	const char	*small = "Bar";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 7);
	expected = strnstr(large, small, 7);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_locate_the_first_occurrence_of_a_char),
	};
	return RUN_GROUP(tests);
}
