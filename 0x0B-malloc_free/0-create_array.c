#include <stdlib.h>
#include "main.h"

/**
  *create_array - function that creates an array of chars
  *@size : i think this is the number of arrays it should create
  *@c : character we are initializing with
  *Return: NULL if size is 0
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(*array) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
