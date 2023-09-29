#include <stdio.h>

/**
  *main - program that prints the number of arguements passed into it
  *@argc : number of arguements
  *@argv : the arguements
  *Return: 0 success
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	/*argc-1 to exclude the name of the program*/
	printf("%d\n", argc - 1);
	return (0);
}

