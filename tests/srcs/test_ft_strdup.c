#include "../utils/tester.h"
#include <string.h>

void	test_duplicate_a_empty_string(void)
{
	char	*test = "";
	char	*result = ft_strdup(test);
	char	*expected = strdup(test);
	ASSERT_EXPR(result != expected && strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_duplicate_a_empty_string),
	};
	return RUN_GROUP(tests);
}
