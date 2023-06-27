#include <stdio.h>

/**
  *main - function that prints all it's arguements
  *@argc : number of arguements passed
  *@argv : the arguements
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

