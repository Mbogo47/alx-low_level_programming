#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of its own main function
 * @bytes: Number of bytes
 *
 * Return: Always 0 (Success)
 */
int print_opcodes(int bytes)
{
	int i;
	char *array;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)print_opcodes;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}

/**
 * main - Prints its own opcodes
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	return print_opcodes(bytes);
}



