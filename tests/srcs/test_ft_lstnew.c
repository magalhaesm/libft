#include "../utils/tester.h"
#include <string.h>

void	test_new_node(void)
{
	t_list	*node = ft_lstnew((void *)10);
	ASSERT_EXPR(node->content == (void *)10);
	ASSERT_EXPR(node->next == NULL);
	free(node);
}

int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_new_node),
	};
	return RUN_GROUP(tests);
}
