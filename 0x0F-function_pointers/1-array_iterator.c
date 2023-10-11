#include "function_pointers.h"
/**
  *array_iterator - executes a func given as parameter on each element of arr
  *@array: array of integers
  *@size: size of array
  *@action: pointer to the function we need to use
  */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
