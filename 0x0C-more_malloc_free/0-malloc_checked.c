#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - function that allocates memory using malloc
  *@b : input
  *Return: Pointer to the allocated memory
  */
/*if malloc fails, cause normal process termination stauts value 98*/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
