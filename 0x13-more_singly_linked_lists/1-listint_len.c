#include "lists.h"

/**
  *listint_len - finds the number of elements in a list
  *@h : the head of the list
  *Return: the number of elements in the linked listint_t list
  */

size_t listint_len(const listint_t *h)
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
