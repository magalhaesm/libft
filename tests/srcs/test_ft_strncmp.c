#include "../utils/tester.h"
#include <string.h>

void	test_ascii_string_are_equal(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	ASSERT_EXPR(ft_strncmp(s1, s2, 2) == 0);
}

void	test_ascii_string_are_different(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	ASSERT_EXPR(ft_strncmp(s1, s2, 3) > 0);
}

void	test_non_ascii_string_are_different(void)
{
	char	s1[] = {'A', 'B', -10};
	char	*s2 = "AB";
	ASSERT_EXPR(ft_strncmp(s1, s2, 3) > 0);
}

void	test_return_zero_when_n_is_zero(void)
{
	char	s1[] = {'A', 'B', 10};
	char	*s2 = "AB";
	ASSERT_EXPR(ft_strncmp(s1, s2, 0) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_ascii_string_are_equal),
		UNIT_TEST(test_ascii_string_are_different),
		UNIT_TEST(test_non_ascii_string_are_different),
		UNIT_TEST(test_return_zero_when_n_is_zero),
	};
	return RUN_GROUP(tests);
}
