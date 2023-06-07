#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: The square root of n if it has a natural square root, otherwise -1
 */
int _sqrt_recursion(int n)
{
	/* Error case: n is negative */
	if (n < 0)
		return -1;

	/* Base case: n is 0 or 1 */
	if (n == 0 || n == 1)
		return n;

	/* Recursive call to calculate square root */
	int i;
	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
			return i;
	}

	return -1;
}
