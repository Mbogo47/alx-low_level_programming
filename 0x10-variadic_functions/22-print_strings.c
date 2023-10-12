#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - prints strings followed by a new line
  *@seperator : string to be printed between strings
  *@n : number of strings to be passed into the functions
  *if seperator is null, don't print it
  *if one of the string is NULL, print (nil) instead of NULL
  */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *currString;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		currString = va_arg(args, char *);
		if (seperator == NULL)
			printf("%s", currString);
		else
		{
			if (i != 0 && currString != NULL)
			{
				printf("%s", seperator);
				printf("%s", currString);
			}
			else if (i == 0 && currString != NULL)
				printf("%s", currString);
			else if (currString == NULL)
			{
				printf("%s", seperator);
				printf("nil");
			}
		}
	}
	va_end(args);
	printf("\n");
}



