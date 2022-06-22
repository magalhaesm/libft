#include "../utils/tester.h"

void	test_clear_the_list(void)
{
	t_list *head = ft_lstnew(malloc(1));
	ft_lstadd_front(&head, ft_lstnew(malloc(1)));
	ft_lstadd_front(&head, ft_lstnew(malloc(1)));
	ft_lstadd_front(&head, ft_lstnew(malloc(1)));
	ft_lstclear(&head, free);
	ASSERT_EXPR(head == NULL);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_clear_the_list),
	};
	return RUN_GROUP(tests);
}
