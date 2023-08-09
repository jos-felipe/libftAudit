#include "minunit.h"
#include "libft.h"
#include <ctype.h>

MU_TEST(test_isdigit_receiving_0_returns_true)
{
	//ARRANGE
	char	input = '0';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isdigit_receiving_9_returns_true)
{
	//ARRANGE
	char	input = '9';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isdigit_receiving_0_up_returns_false)
{
	//ARRANGE
	char	input = '0' - 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isdigit_receiving_9_down_returns_false)
{
	//ARRANGE
	char	input = '9' + 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}


MU_TEST_SUITE(ft_isdigit_test_suite) 
{
	MU_RUN_TEST(test_isdigit_receiving_0_returns_true);
	MU_RUN_TEST(test_isdigit_receiving_9_returns_true);
	MU_RUN_TEST(test_isdigit_receiving_0_up_returns_false);
	MU_RUN_TEST(test_isdigit_receiving_9_down_returns_false);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isdigit_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}