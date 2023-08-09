#include "minunit.h"
#include "libft.h"
#include <ctype.h>

MU_TEST(test_isalpha_receiving_A_returns_true)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_Z_returns_true)
{
	//ARRANGE
	char	input = 'Z';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_A_up_returns_false)
{
	//ARRANGE
	char	input = 'A' - 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_Z_down_returns_false)
{
	//ARRANGE
	char	input = 'Z' + 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_a_returns_true)
{
	//ARRANGE
	char	input = 'a';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_z_returns_true)
{
	//ARRANGE
	char	input = 'z';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_a_up_returns_false)
{
	//ARRANGE
	char	input = 'a' - 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_z_down_returns_false)
{
	//ARRANGE
	char	input = 'z' + 1;
	int		expected_result = 0;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalpha_test_suite) 
{
	MU_RUN_TEST(test_isalpha_receiving_A_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_Z_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_A_up_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_Z_down_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_a_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_z_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_a_up_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_z_down_returns_false);

}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}