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

void	test_ascii_character_string(void)
{
	char	test[] = "$aA0/gh yX=`\n";
	int		result;
	int		expected;

	result = ft_strlen(test);
	expected = strlen(test);
	ASSERT_EXPR(result == expected);
}

void	test_non_ascii_character_string(void)
{
	char	test[] = {-10, 227, 252, '\0'}; // 246, ã, ü, \n
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
		UNIT_TEST(test_ascii_character_string),
		UNIT_TEST(test_non_ascii_character_string),
	};
	return RUN_GROUP(tests);
}
