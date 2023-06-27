#include <stdarg.h>

/**
  *sum_them_all - returns the sum of all its parameters
  *@n : number of items we wanna sum
  *Return: the sum of all integers
  *if n == 0, return 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int sum;

	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
