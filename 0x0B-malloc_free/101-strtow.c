#include "main.h"
#include <stdlib.h>

/**
 * free_2d_array - frees a 2 dimensional array.
 * @array: multidimensional array of char.
 * @rows: height of the array.
 *
 * Return: no return
 */
void free_2d_array(char **array, unsigned int rows)
{
	if (array != NULL && rows != 0)
	{
		for (unsigned int i = 0; i < rows; i++)
			free(array[i]);
		free(array);
	}
}

/**
 * split_string - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **split_string(char *str)
{
	char **output;
	unsigned int str_index, row_count, i, j, word_start;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (str_index = row_count = 0; str[str_index] != '\0'; str_index++)
		if (str[str_index] != ' ' && (str[str_index + 1] == ' ' || str[str_index + 1] == '\0'))
			row_count++;
	output = malloc((row_count + 1) * sizeof(char *));
	if (output == NULL || row_count == 0)
	{
		free(output);
		return (NULL);
	}
	for (i = word_start = 0; i < row_count; i++)
	{
		for (str_index = word_start; str[str_index] != '\0'; str_index++)
		{
			if (str[str_index] == ' ')
				word_start++;
			if (str[str_index] != ' ' && (str[str_index + 1] == ' ' || str[str_index + 1] == '\0'))
			{
				output[i] = malloc((str_index - word_start + 2) * sizeof(char));
				if (output[i] == NULL)
				{
					free_2d_array(output, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; word_start <= str_index; word_start++, j++)
			output[i][j] = str[word_start];
		output[i][j] = '\0';
	}
	output[i] = NULL;
	return (output);
}

