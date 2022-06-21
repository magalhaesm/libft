#include "../utils/tester.h"
#include <string.h>

void	test_split_a_string(void)
{
	char	*test = "   Lorem ipsum dolor sit amet.  ";
	char	**result = ft_split(test, ' ');
	ASSERT_EXPR(!strcmp(result[0], "Lorem"));
	free_arr(result);
}

void	test_null_byte_at_the_end_of_a_string(void)
{
	char	*test = "   Lorem ipsum dolor sit amet.  ";
	char	**result = ft_split(test, ' ');
	ASSERT_EXPR(!memcmp(result[3], "sit", 4));
	free_arr(result);
}

void	test_null_pointer_at_the_end(void)
{
	char	*test = "   Lorem ipsum dolor sit amet.  ";
	char	**result = ft_split(test, ' ');
	ASSERT_EXPR(result[5] == NULL);
	free_arr(result);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_split_a_string),
		UNIT_TEST(test_null_byte_at_the_end_of_a_string),
		UNIT_TEST(test_null_pointer_at_the_end),
	};
	return RUN_GROUP(tests);
}
