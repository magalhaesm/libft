#include "../utils/tester.h"
#include <string.h>

void	test_locate_terminating_null(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, '\0');
	expected = strrchr(test, '\0');
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_locate_terminating_null),
	};
	return RUN_GROUP(tests);
}
