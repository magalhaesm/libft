#include "../utils/tester.h"
#include <string.h>

void	*capitalize(void *c)
{
	char	str[2];
	str[0] = *(char *)c - 32;
	str[1] = '\0';
	return (strdup(str));
}

void	test_iteration(void)
{
	t_list	*head = ft_lstnew(strdup("a"));
	ft_lstadd_back(&head, ft_lstnew(strdup("b")));
	ft_lstadd_back(&head, ft_lstnew(strdup("c")));

	t_list	*new_list = ft_lstmap(head, capitalize, free);
	ASSERT_EXPR(!strcmp(new_list->content, "A"));
	ASSERT_EXPR(!strcmp(new_list->next->content, "B"));
	ASSERT_EXPR(!strcmp(new_list->next->next->content, "C"));

	ft_lstclear(&new_list, free);
	ft_lstclear(&head, free);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_iteration),
	};
	return RUN_GROUP(tests);
}
