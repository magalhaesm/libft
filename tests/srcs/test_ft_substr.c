#include "../utils/tester.h"
#include <string.h>
#include <malloc.h>

void	test_return_a_substring(void)
{
	char	*string = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char	*result = ft_substr(string, 6, 5);
	char	*expected = "ipsum";
	ASSERT_EXPR(!strcmp(result, expected) && (result != expected));
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_a_substring),
	};
	return RUN_GROUP(tests);
}
