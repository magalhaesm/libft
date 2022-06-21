#include "../utils/tester.h"
#include <string.h>

void	test_empty_list(void)
{
	t_list	*node = NULL;
	ASSERT_EXPR(ft_lstsize(node) == 0);
}

void	test_non_empty_list(void)
{
	t_list	*node = ft_lstnew((void *)10);
	ASSERT_EXPR(ft_lstsize(node) == 1);
	free(node);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_empty_list),
		UNIT_TEST(test_non_empty_list),
	};
	return RUN_GROUP(tests);
}
