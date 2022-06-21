#include "../utils/tester.h"
#include <string.h>

void	capitalize(unsigned int i, char *c)
{
	(void)i;
	*c -= 32;
}

void	test_iteration(void)
{
	char	result[] = "test";
	ft_striteri(result, capitalize);
	char	*expected = "TEST";
	ASSERT_EXPR(!strcmp(result, expected));
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_iteration),
	};
	return RUN_GROUP(tests);
}
