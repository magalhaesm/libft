#include "../utils/tester.h"
#include <string.h>

void	test_ascii_string_are_equal(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	int		result = ft_strncmp(s1, s2, 2);
	int		expeted = strncmp(s1, s2, 2);
	ASSERT_EXPR(result == expeted);
}

void	test_ascii_string_are_different(void)
{
	char	*s1 = "ABC";
	char	*s2 = "AB";
	int		result = ft_strncmp(s1, s2, 3);
	int		expeted = strncmp(s1, s2, 3);
	ASSERT_EXPR(result == expeted);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_ascii_string_are_equal),
		UNIT_TEST(test_ascii_string_are_different),
	};
	return RUN_GROUP(tests);
}
