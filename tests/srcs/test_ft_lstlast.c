#include "../utils/tester.h"

void	test_empty_list(void)
{
	t_list	*newnode = NULL;
	ASSERT_EXPR(ft_lstlast(newnode) == NULL);
}

void	test_non_empty_list(void)
{
	t_list	*newnode = ft_lstnew((void *)10);
	newnode->next = ft_lstnew((void *)1);
	ASSERT_EXPR(ft_lstlast(newnode)->content == (void *)1);
	free(newnode->next);
	free(newnode);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_empty_list),
		UNIT_TEST(test_non_empty_list),
	};
	return RUN_GROUP(tests);
}
