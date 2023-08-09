#include <string.h>
#include "libft.h"
#include "minunit.h"

MU_TEST(test_isascii_receiving_phrase_returns_true)
{
	//ARRANGE
	char	*input = "strlen - calculate the length of a string";
	int		expected_result = (int)strlen(input);// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isascii_receiving_DEL_returns_true)
{
	//ARRANGE
	char	*input = 127;
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isascii_receiving_null_up_returns_false)
{
	//ARRANGE
	char	input = 0 - 1;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isascii_receiving_DEL_down_returns_false)
{
	//ARRANGE
	char	input = -128;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}


MU_TEST_SUITE(ft_isascii_test_suite) 
{
	MU_RUN_TEST(test_isascii_receiving_phrase_returns_41);
	MU_RUN_TEST(test_isascii_receiving_empty_returns_0);
	MU_RUN_TEST(test_isascii_receiving_null_up_returns_false);
	MU_RUN_TEST(test_isascii_receiving_DEL_down_returns_false);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isascii_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}