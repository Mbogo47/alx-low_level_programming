#include <stdio.h>
#include "main.h"

/**
 * calculate_sqrt - Recursive helper function to calculate square root
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 * Return: The square root of n, or -1 if there is no natural square root
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	if (guess * guess > n)
		return -1;
	return calculate_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: The number to calculate the square root of
 * Return: The square root of n, or -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return calculate_sqrt(n, 0);
}

