#include "../utils/tester.h"
#include <malloc.h>

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

void	test_check_size_of_the_allocated_memory_block(void)
{
	size_t	*result = ft_calloc(4, 2);
	size_t	*expected = calloc(4, 2);
	ASSERT_EXPR(malloc_usable_size(result) == malloc_usable_size(expected));
	free(result);
	free(expected);
}
int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_null_when_size_or_nmemb_is_zero),
		UNIT_TEST(test_return_null_when_occurs_an_integer_overflow),
		UNIT_TEST(test_check_size_of_the_allocated_memory_block),
	};
	return RUN_GROUP(tests);
}
