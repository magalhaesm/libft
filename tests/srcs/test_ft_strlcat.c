#include "../utils/tester.h"
#include <bsd/string.h>

#define BUF 100

void	test_concatenate_string_having_enough_space(void)
{
	const char	test[] = " ft_strlcat";
	char	result[BUF] = "testing";
	char	expected[BUF] = "testing";
	ft_strlcat(result, test, sizeof(result));
	strlcat(expected, test, sizeof(expected));
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_concatenate_string_having_enough_space),
	};
	return RUN_GROUP(tests);
}
