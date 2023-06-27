#include <stdio.h>
#include <stdlib.h>

/**
  *main - function that multiplies two digits exactly
  *@argc : the number of arguements passed
  *@argv : the arguements passed
  *Return: 0 success and 1 for error
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
