#include "../utils/tester.h"
#include <string.h>

void	test_return_a_new_joined_string(void)
{
	char	*s1 = "Lorem ";
	char	*s2 = "ipsum.";
	char	*result = ft_strjoin(s1, s2);
	char	*expected = "Lorem ipsum.";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_a_new_joined_string),
	};
	return RUN_GROUP(tests);
}
