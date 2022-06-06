#include "../utils/tester.h"
#include <string.h>

void	test_set_memory_region(void)
{
	char	*test = "string de teste";
	size_t	testlen = strlen(test);
	char	result[testlen];
	char	expected[testlen];

	bzero(result, testlen);
	ft_bzero(expected, testlen);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_set_memory_region),
	};
	return RUN_GROUP(tests);
}
