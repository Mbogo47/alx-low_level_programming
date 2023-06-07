#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;

	/* Recursive call to print the rest of the string in reverse */
	_print_rev_recursion(s + 1);
	putchar(*s);
}

