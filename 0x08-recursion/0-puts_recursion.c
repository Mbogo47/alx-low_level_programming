#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else (*s == '\0')
	{
		putchar('\n');
	}
}

