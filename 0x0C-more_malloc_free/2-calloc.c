#include <stdlib.h>
#include "main.h"

/**
  *_calloc - allocates memory for an array using malloc
  *@nmemb : number of elements
  *@size : size of each element
  *Return: pointer to the created array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	char *array;
	int i;

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
