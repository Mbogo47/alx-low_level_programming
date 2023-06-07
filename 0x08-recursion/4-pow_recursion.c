#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 * Return: The calculated value of x raised to the power of y, or -1 if there is an error
 */
int _pow_recursion(int x, int y)
{
	/* Error case: y is negative */
	if (y < 0)
		return -1;

	/* Base case: y is 0 */
	if (y == 0)
		return 1;

	/* Recursive call to calculate power */
	return x * _pow_recursion(x, y - 1);
}

