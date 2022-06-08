#include "../utils/tester.h"
#include <string.h>

void	test_search_for_a_character_that_exists(void)
{
	char	*test = "string de teste";
	char	*result;
	char	*expected;

	result = ft_memchr(test, 'd', 10);
	expected = memchr(test, 'd', 10);
	ASSERT_EXPR(result == expected);
}

void	test_search_for_a_character_that_dont_exists(void)
{
	char	*test = "string de teste";
	char	*result;
	char	*expected;

	result = ft_memchr(test, 'D', 10);
	expected = memchr(test, 'D', 10);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_search_for_a_character_that_exists),
		UNIT_TEST(test_search_for_a_character_that_dont_exists),
	};
	return RUN_GROUP(tests);
}
