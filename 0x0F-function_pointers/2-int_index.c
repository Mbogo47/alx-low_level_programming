#include "function_pointers.h"
/**
  *int_index - searches for an integer
  *@array: array of digits
  *@size: size of the array passed
  *@cmp: pointer to a fucntion to be used to compare values
  *Return: index of the 1st element for which cmp func does not return 0
  */

/*this function seems to return 0 if a number is not an int*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size - 1; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

