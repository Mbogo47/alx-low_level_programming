#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *Return: Always 0 (Success)
 **/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

