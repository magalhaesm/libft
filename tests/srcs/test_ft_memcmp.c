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

void	test_memory_area_are_not_equal(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	int		result = ft_memcmp(s1, s2, 3);
	int		expected = memcmp(s1, s2, 3);
	ASSERT_EXPR(result == expected);
}

void	test_memory_area_with_nulls(void)
{
	char	s1[] = {0, 1, 0, 1};
	char	s2[] = {0, 1, 0, 0};
	int		result = ft_memcmp(s1, s2, 4);
	int		expected = memcmp(s1, s2, 4);
	ASSERT_EXPR((result > 0) && (expected > 0));
}

void	test_return_zero_when_n_is_zero(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	int		result = ft_memcmp(s1, s2, 0);
	int		expected = memcmp(s1, s2, 0);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_memory_area_are_equal),
		UNIT_TEST(test_memory_area_are_not_equal),
		UNIT_TEST(test_memory_area_with_nulls),
		UNIT_TEST(test_return_zero_when_n_is_zero),
	};
	return RUN_GROUP(tests);
}
