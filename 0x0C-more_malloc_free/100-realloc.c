#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	clone = ptr;
	relloc = malloc(new_size);

	if (relloc == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		relloc[i] = clone[i];

	free(ptr);

	return (relloc);
}

