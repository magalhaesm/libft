#include "../utils/tester.h"
#include <string.h>
#include <limits.h>

void	test_zero(void)
{
	char	*result;
	result = ft_itoa(0);
	ASSERT_EXPR(!strcmp(result, "0"));
	free(result);
}

void	test_negative(void)
{
	char	*result;
	result = ft_itoa(-42);
	ASSERT_EXPR(!strcmp(result, "-42"));
	free(result);
}

void	test_positive(void)
{
	char	*result;
	result = ft_itoa(42);
	ASSERT_EXPR(!strcmp(result, "42"));
	free(result);
}

void	test_int_max(void)
{
	char	*result;
	result = ft_itoa(INT_MAX);
	ASSERT_EXPR(!strcmp(result, "2147483647"));
	free(result);
}

void	test_int_min(void)
{
	char	*result;
	result = ft_itoa(INT_MIN);
	ASSERT_EXPR(!strcmp(result, "-2147483648"));
	free(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_zero),
		UNIT_TEST(test_negative),
		UNIT_TEST(test_positive),
		UNIT_TEST(test_int_max),
		UNIT_TEST(test_int_min),
	};
	return RUN_GROUP(tests);
}
