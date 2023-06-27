#include <stdio.h>

/**
  *main - prints the name of the file it was compiled from
  *Return: 0
  */

#define FILENAME __FILE__

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
