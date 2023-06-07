#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be printed
**/

void _puts_recursion(char*s)
{
        /*Base case*/
        if (*s == '\0')
        {
                putchar('\n');
                return;
        }
                putchar(*s);
                /*Recursive call to print rest of the string*/
                _puts_recursion(s + 1);
}

