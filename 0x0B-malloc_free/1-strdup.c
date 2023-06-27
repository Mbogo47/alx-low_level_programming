#include "main.h"
#include <stdlib.h>

/**
  *_strdup - rets ptr to newly alloc space in mem containing cp of stras prm
  *@str : the string passed
  *Return: pointer
  */

char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	free(array);
	return (array);
}

