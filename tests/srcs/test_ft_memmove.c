#include "../utils/tester.h"
#include <string.h>

void	test_move_memory_area_to_the_right(void)
{
	char	test[] = "This is an example";
	char	test2[] = "This is an example";
	char	*result;
	char	*expected;

	result = ft_memmove(test + 1, test, 10);
	expected = memmove(test2 + 1, test2, 10);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_move_memory_area_to_the_left(void)
{
	char	test[] = " search for a character that don't exists";
	char	test2[] = " search for a character that don't exists";
	char	*result;
	char	*expected;

	result = ft_memmove(test, test + 1, 40);
	expected = memmove(test2, test2 + 1, 40);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_move_memory_area_to_the_right),
		UNIT_TEST(test_move_memory_area_to_the_left),
	};
	return RUN_GROUP(tests);
}
