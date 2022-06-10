#include "../utils/tester.h"
#include <string.h>

void	test_locate_terminating_null(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, '\0');
	expected = strrchr(test, '\0');
	ASSERT_EXPR(result == expected);
}

void	test_locate_a_existing_char(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, 'm');
	expected = strrchr(test, 'm');
	ASSERT_EXPR(result == expected);
}

void	test_locate_the_first_char(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, 'L');
	expected = strrchr(test, 'L');
	ASSERT_EXPR(result == expected);
}

void	test_return_null_for_non_existing_char(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, 'M');
	expected = strrchr(test, 'M');
	ASSERT_EXPR(result == expected);
}

void	test_negative_integer(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, -191);
	expected = strrchr(test, -191);
	ASSERT_EXPR(result == expected);
}

void	test_force_char_overflow(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strrchr(test, 356);
	expected = strrchr(test, 356);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_locate_terminating_null),
		UNIT_TEST(test_locate_a_existing_char),
		UNIT_TEST(test_locate_the_first_char),
		UNIT_TEST(test_return_null_for_non_existing_char),
		UNIT_TEST(test_negative_integer),
		UNIT_TEST(test_force_char_overflow),
	};
	return RUN_GROUP(tests);
}
