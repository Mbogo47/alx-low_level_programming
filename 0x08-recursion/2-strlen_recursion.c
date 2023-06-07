#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to calculate the length of
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return 0;

	/* Recursive call to calculate the length of the rest of the string */
	return 1 + _strlen_recursion(s + 1);
}

