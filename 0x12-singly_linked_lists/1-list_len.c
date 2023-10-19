#include "lists.h"

/**
  *list_len - finds the number of elements in a linked list
  *@h : the list
  *Return: the number of elements in the list or the length of the list
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
