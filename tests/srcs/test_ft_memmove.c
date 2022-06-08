#include "../utils/tester.h"
#include <string.h>

void	test_copy_to_memory_area_without_overlap(void)
{
	char	test[] = "This is an example";
	char	*result;
	char	*expected;

	result = ft_memmove(test, test, 10);
	expected = memmove(test, test, 10);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_copy_to_memory_area_that_overlap(void)
{
	char	test[] = "This is an example";
	char	*result;
	char	*expected;

	result = ft_memmove(test + 7, test, 10);
	expected = memmove(test + 7, test, 10);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_copy_to_memory_area_without_overlap),
		UNIT_TEST(test_copy_to_memory_area_that_overlap),
	};
	return RUN_GROUP(tests);
}
