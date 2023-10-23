#include "lists.h"

/**
  *print_listint - prints all the elements of listInt_t list
  *@h : the head of the list
  *Return: the number of nodes in the list
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
