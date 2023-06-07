#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 * Return: The factorial of the number, or -1 if there is an error
 */
int factorial(int n)
{
	/* Error case: n is negative */
	if (n < 0)
		return -1;

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return 1;

	/* Recursive call to calculate factorial */
	return n * factorial(n - 1);
}

