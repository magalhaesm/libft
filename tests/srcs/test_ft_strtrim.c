#include "../utils/tester.h"
#include <string.h>

void	test_return_a_trimmed_string(void)
{
	char	*string = "lorem ipsum dolor sit amet, consectetur adipiscing elit";
	char	*set = "elliot rem";
	char	*result = ft_strtrim(string, set);
	char	*expected = "psum dolor sit amet, consectetur adipiscing";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_a_trimmed_string),
	};
	return RUN_GROUP(tests);
}
