#include "../utils/tester.h"
#include <string.h>
#include <bsd/string.h>

void	test_copy_string(void)
{
	char	*test = "teste";
	char	result[10];
	char	expected[10];
	ft_strlcpy(result, test, 5);
	strlcpy(expected, test, 5);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_copy_string),
	};
	return RUN_GROUP(tests);
}
