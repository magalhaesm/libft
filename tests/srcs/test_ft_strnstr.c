#include "../utils/tester.h"
#include <bsd/string.h>

void	test_locate_the_first_occurrence_of_a_char(void)
{
	const char	*large = "Foo Bar Baz";
	const char	*small = "Bar";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 7);
	expected = strnstr(large, small, 7);
	ASSERT_EXPR(result == expected);
}

void	test_locate_the_first_occurrence_of_a_string(void)
{
	const char	*large = "gtagtatatatatatactactagtag";
	const char	*small = "tacta";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 20);
	expected = strnstr(large, small, 20);
	ASSERT_EXPR(result == expected);
}

void	test_return_null_when_the_searched_string_is_empty(void)
{
	const char	*large = "Foo Bar Baz";
	const char	*small = "";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 20);
	expected = strnstr(large, small, 20);
	ASSERT_EXPR(result == expected);
}

void	test_return_null_when_search_in_a_empty_string(void)
{
	const char	*large = "";
	const char	*small = "Bar";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 5);
	expected = strnstr(large, small, 5);
	ASSERT_EXPR(result == expected);
}

void	test_return_null_when_just_part_of_string_is_found(void)
{
	const char	*large = "gtagtatatatatatactactagtag";
	const char	*small = "ctag";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 22);
	expected = strnstr(large, small, 22);
	ASSERT_EXPR(result == expected);
}

void	test_return_zero_when_len_is_zero(void)
{
	const char	*large = "gtagtatatatatatactactagtag";
	const char	*small = "ctag";
	char	*result;
	char	*expected;

	result = ft_strnstr(large, small, 0);
	expected = strnstr(large, small, 0);
	ASSERT_EXPR(result == expected);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_locate_the_first_occurrence_of_a_char),
		UNIT_TEST(test_locate_the_first_occurrence_of_a_string),
		UNIT_TEST(test_return_null_when_the_searched_string_is_empty),
		UNIT_TEST(test_return_null_when_search_in_a_empty_string),
		UNIT_TEST(test_return_null_when_just_part_of_string_is_found),
		UNIT_TEST(test_return_zero_when_len_is_zero),
	};
	return RUN_GROUP(tests);
}
