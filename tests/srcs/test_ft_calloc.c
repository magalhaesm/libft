#include "../utils/tester.h"

void	test_return_null_when_size_or_nmemb_is_zero(void)
{
	size_t	*result = ft_calloc(0, 0);
	size_t	*expected = NULL;
	ASSERT_EXPR(result == expected);
}

void	test_return_null_when_occurs_an_integer_overflow(void)
{
	size_t	*result = ft_calloc(2, INT_MAX);
	size_t	*expected = NULL;
	ASSERT_EXPR(result == expected);
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_null_when_size_or_nmemb_is_zero),
		UNIT_TEST(test_return_null_when_occurs_an_integer_overflow),
	};
	return RUN_GROUP(tests);
}
