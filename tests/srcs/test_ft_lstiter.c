#include "../utils/tester.h"
#include <string.h>

void	capitalize(void *c)
{
	*(char *)c -= 32;
}

void	test_iteration(void)
{
	t_list *head = ft_lstnew(strdup("a"));
	ft_lstadd_back(&head, ft_lstnew(strdup("b")));
	ft_lstadd_back(&head, ft_lstnew(strdup("c")));
	ft_lstiter(head, capitalize);
	ASSERT_EXPR(!strcmp(head->content, "A"));
	ASSERT_EXPR(!strcmp(head->next->content, "B"));
	ASSERT_EXPR(!strcmp(head->next->next->content, "C"));
	ft_lstclear(&head, free);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_iteration),
	};
	return RUN_GROUP(tests);
}
