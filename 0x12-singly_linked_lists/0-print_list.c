#include "lists.h"

/**
  *print_list - prints all elements of a list
  *@h : head of the list or rather the list
  *Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	/*if there are no elements, return 0*/

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		/*if str is NULL, print [0] (nil)*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
