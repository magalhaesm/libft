#include "../utils/tester.h"
#include <string.h>

void	test_output_to_fd(void)
{
	int	fd = mktmpfd();
	ft_putchar_fd('m', fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "m"));
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_output_to_fd),
	};
	return RUN_GROUP(tests);
}
