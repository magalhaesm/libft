#include "../utils/tester.h"

void	test_return_null_when_size_or_nmemb_is_zero(void)
{
	size_t	*result = ft_calloc(0, 0);
	size_t	*expected = NULL;
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_null_when_size_or_nmemb_is_zero),
	};
	return RUN_GROUP(tests);
}
