#include "main.h"
#include <stdio.h>

/**
  *_strlen_recursion - Recursively finds the Length of a String
**/


int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}

