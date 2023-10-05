#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr; // Using char* for byte-wise operations
    unsigned int total_size, i;

    // Check for nmemb or size being 0
    if (nmemb == 0 || size == 0)
        return (NULL);

    // Calculate the total size needed
    total_size = nmemb * size;

    // Allocate memory using malloc
    ptr = malloc(total_size);
    
    // Check if malloc failed
    if (ptr == NULL)
        return (NULL);

    // Initialize memory to zero
    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return ((void *)ptr);
}
