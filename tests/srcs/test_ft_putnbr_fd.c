#include "../utils/tester.h"
#include <string.h>
#include <limits.h>

void	test_zero(void)
{
	int		fd = mktmpfd();
	ft_putnbr_fd(0, fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "0"));
}

void	test_negative(void)
{
	int		fd = mktmpfd();
	ft_putnbr_fd(-42, fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "-42"));
}

void	test_positive(void)
{
	int		fd = mktmpfd();
	ft_putnbr_fd(42, fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "42"));
}

void	test_int_max(void)
{
	int		fd = mktmpfd();
	ft_putnbr_fd(INT_MAX, fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "2147483647"));
}

void	test_int_min(void)
{
	int		fd = mktmpfd();
	ft_putnbr_fd(INT_MIN, fd);
	char	*result = get_output(fd);
	ASSERT_EXPR(!strcmp(result, "-2147483648"));
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
