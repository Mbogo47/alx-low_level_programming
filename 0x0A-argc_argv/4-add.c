#include <stdio.h>
#include <stdlib.h>

/**
  *main - function that adds positive numbers
  *@argc : number of arguements
  *@argv : arguements passed ie the digits in this case
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

