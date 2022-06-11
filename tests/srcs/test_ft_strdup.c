#include "../utils/tester.h"
#include <string.h>

void	test_duplicate_a_empty_string(void)
{
	char	*test = "";
	char	*result = ft_strdup(test);
	char	*expected = strdup(test);
	ASSERT_EXPR(result != expected && strcmp(result, expected) == 0);
	free(result);
	free(expected);
}

void	test_duplicate_a_string(void)
{
	char	*test = "Please, Please, Please Let Me Get What I Want";
	char	*result = ft_strdup(test);
	char	*expected = strdup(test);
	ASSERT_EXPR(result != expected && strcmp(result, expected) == 0);
	free(result);
	free(expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_duplicate_a_empty_string),
		UNIT_TEST(test_duplicate_a_string),
	};
	return RUN_GROUP(tests);
}
