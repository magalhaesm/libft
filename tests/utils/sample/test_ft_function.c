#include "../utils/tester.h"

void	test_alphabetic_character(void)
{
}


int	main(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_alphabetic_character),
	};
	return RUN_GROUP(tests);
}
