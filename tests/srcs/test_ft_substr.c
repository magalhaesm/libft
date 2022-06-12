#include "../utils/tester.h"
#include <string.h>
#include <malloc.h>

void	test_return_a_substring(void)
{
	char	*string = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char	*result = ft_substr(string, 6, 5);
	char	*expected = "ipsum";
	ASSERT_EXPR(!strcmp(result, expected) && (result != expected));
	free(result);
}

void	test_return_just_a_char_in_a_string(void)
{
	char	*string = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char	*result = ft_substr(string, 1, 1);
	char	*expected = "o";
	ASSERT_EXPR(!strcmp(result, expected) && (result != expected));
	free(result);
}

void	test_start_beyond_string_length(void)
{
	char	*string = "Lorem ipsum dolor sit amet.";
	char	*result = ft_substr(string, 50, 5);
	char	*expected = "";
	ASSERT_EXPR(!strcmp(result, expected) && (result != expected));
	free(result);
}

void	test_allocated_size(void)
{
	char	*string = "Lorem ipsum dolor sit amet.";
	char	*result = ft_substr(string, 0, 1000);
	char	*size_needed = malloc(strlen(string) + 1);
	int		allocated = malloc_usable_size(result);
	int		expected = malloc_usable_size(size_needed);
	ASSERT_EXPR(allocated == expected);
	free(result);
	free(size_needed);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_a_substring),
		UNIT_TEST(test_return_just_a_char_in_a_string),
		UNIT_TEST(test_start_beyond_string_length),
		UNIT_TEST(test_allocated_size),
	};
	return RUN_GROUP(tests);
}
