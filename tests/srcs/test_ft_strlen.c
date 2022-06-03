#include "../utils/tester.h"
#include <string.h>

void	test_empty_string(void)
{
	char	test[] = "";
	int		result;
	int		expected;

	result = ft_strlen(test);
	expected = strlen(test);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_empty_string),
	};
	return RUN_GROUP(tests);
}
