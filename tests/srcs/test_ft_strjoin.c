#include "../utils/tester.h"
#include <string.h>
#include <malloc.h>

void	test_return_a_new_joined_string(void)
{
	char	*s1 = "Lorem ";
	char	*s2 = "ipsum.";
	char	*result = ft_strjoin(s1, s2);
	char	*expected = "Lorem ipsum.";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

void	test_join_an_empty_string(void)
{
	char	*s1 = "";
	char	*s2 = "ipsum.";
	char	*result = ft_strjoin(s1, s2);
	char	*expected = "ipsum.";
	ASSERT_EXPR(!strcmp(result, expected));
	free(result);
}

void	test_allocated_size(void)
{
	char	*s1 = "Lorem ";
	char	*s2 = "ipsum.";
	char	*expected_str = "Lorem ipsum.";
	char	*result = ft_strjoin(s1, s2);
	char	*size_needed = malloc(strlen(expected_str) + 1);

	int		allocated = malloc_usable_size(result);
	int		expected = malloc_usable_size(size_needed);

	ASSERT_EXPR(allocated == expected);
	free(result);
	free(size_needed);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_a_new_joined_string),
		UNIT_TEST(test_join_an_empty_string),
		UNIT_TEST(test_allocated_size),
	};
	return RUN_GROUP(tests);
}
