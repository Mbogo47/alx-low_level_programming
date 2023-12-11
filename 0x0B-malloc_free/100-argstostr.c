#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to an array of characters
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0, i, j, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		free(concatenated);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index] = av[i][j];
			index++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';

	return (concatenated);
}

