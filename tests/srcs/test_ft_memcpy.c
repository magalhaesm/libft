#include "../utils/tester.h"
#include <string.h>

void	test_copy_to_memory_area(void)
{
	char	*test = "string de teste";
	int		testlen = strlen(test) + 1;
	char	result[50];
	char	expected[50];

	memcpy(expected, test, testlen);
	ft_memcpy(result, test, testlen);
	ASSERT_EXPR(!memcmp(result, expected, testlen));
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_copy_to_memory_area),
	};
	return RUN_GROUP(tests);
}
