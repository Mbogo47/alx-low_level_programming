i#include "main.h"
/**
  *evaluate_num - recursion loop
 **/

int evaluate_num(int num, int iterator)
{
    if (num % iterator == 0)
		return (0);
	else if (iterator == num - 1)
		return (1);
	if (num % iterator != 0)
		return (evaluate_num(num, iterator + 1));
	return (0);
}

/**
  *is_prime_number - evaluate whether a number is prime or not
  *Return: returns 1 if number is prime and 0 if number is not
**/

int is_prime_number(int num)
{
	int iterator = 2;
	if (num == 2)
		return (1);
	if (num < 2)
		return (0);
	return (evaluate_num(num, iterator));
}

