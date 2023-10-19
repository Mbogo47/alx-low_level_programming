#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees the list.
 * @head: the list itself
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}

