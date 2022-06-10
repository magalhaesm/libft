#include "../utils/tester.h"
#include <string.h>

void	test_locate_terminating_null(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";

	char	*result;
	char	*expected;

	result = ft_strchr(test, '\0');
	expected = strchr(test, '\0');
	ASSERT_EXPR(result == expected);
}

void	test_locate_a_existing_char(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strchr(test, 'd');
	expected = strchr(test, 'd');
	ASSERT_EXPR(result == expected);
}

void	test_non_existing_char(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strchr(test, 'D');
	expected = strchr(test, 'D');
	ASSERT_EXPR(result == expected);
}

void	test_char_overflow(void)
{
	char	test[] = "Lorem ipsum dolor sit amet.";
	char	*result;
	char	*expected;

	result = ft_strchr(test, 'L' + 256);
	expected = strchr(test, 'L' + 256);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_locate_terminating_null),
		UNIT_TEST(test_locate_a_existing_char),
		UNIT_TEST(test_non_existing_char),
		UNIT_TEST(test_char_overflow),
	};
	return RUN_GROUP(tests);
}
