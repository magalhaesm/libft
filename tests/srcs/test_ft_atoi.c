#include "../utils/tester.h"
#include <stdlib.h>

void	test_convert_negative_signed_integers(void)
{
	char	*test = "-42";
	int		result;
	int		expected;

	result = ft_atoi(test);
	expected = atoi(test);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_convert_negative_signed_integers),
	};
	return RUN_GROUP(tests);
}
