#include "../utils/tester.h"
#include <string.h>

void	test_new_node_in_front(void)
{
	t_list	*head = ft_lstnew((void *)10);
	ft_lstadd_front(&head, ft_lstnew((void *)5));
	ASSERT_EXPR(head->content == (void *)5);
	ASSERT_EXPR(head->next->content == (void *)10);
	free(head->next);
	free(head);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_new_node_in_front),
	};
	return RUN_GROUP(tests);
}
