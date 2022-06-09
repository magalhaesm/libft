#include "../utils/tester.h"
#include <string.h>

void	test_memory_area_are_equal(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	int		result = ft_memcmp(s1, s2, 2);
	int		expected = memcmp(s1, s2, 2);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_memory_area_are_equal),
	};
	return RUN_GROUP(tests);
}
