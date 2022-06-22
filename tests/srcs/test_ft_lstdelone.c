#include "../utils/tester.h"

void	test_delete_a_node(void)
{
	t_list	*newnode = ft_lstnew(malloc(8));
	ft_lstdelone(newnode, free);
	newnode = NULL;
	ASSERT_EXPR(newnode == NULL);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_delete_a_node),
	};
	return RUN_GROUP(tests);
}
