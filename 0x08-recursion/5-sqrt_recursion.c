#include "main.h"
/**
  *_evaluate - evaluate function sqrt
  *Return: evaluate sqrt
**/

int _evaluate(int i, int n)
{
	 if (i * i == n)
		return (i);
	else if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	return (-1);
}


/**
  *_sqrt_recursion - calculates the natural square root of a given integer
  *Return: natural square root
**/

int _sqrt_recursion(int n)
{
	int i = 0;
	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}

