#include "../utils/tester.h"
#include <string.h>

void	test_output_to_fd(void)
{
	int	fd = mktmpfd();
	ft_putstr_fd("lorem ipsum dolor sit amet", fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "lorem ipsum dolor sit amet"));
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_output_to_fd),
	};
	return RUN_GROUP(tests);
}
