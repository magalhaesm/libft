#include "../utils/tester.h"
#include <string.h>

void	test_set_memory_region(void)
{
	char	test1[] = "string de teste";
	char	test2[] = "string de teste";
	size_t	testlen = strlen(test1);
	char	*result;
	char	*expected;

	result = ft_memset(test1, 'M', testlen);
	expected = memset(test2, 'M', testlen);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_set_memory_region),
	};
	return RUN_GROUP(tests);
}
