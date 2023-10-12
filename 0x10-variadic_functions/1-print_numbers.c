#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - prints numbers followed by a new line
  *@seperator : string to be printed between numbers
  *@n : number of integers to be passed into the function
  */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int currNum;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		currNum = va_arg(args, int);

		if (seperator == NULL)
			printf("%d", currNum);
		else
		{
			if (i != 0)
			{
				printf("%s", seperator);
				printf("%d", currNum);
			}
			else if (i == 0)
				printf("%d", currNum);
		}
	}
	va_end(args);
	printf("\n");
}
