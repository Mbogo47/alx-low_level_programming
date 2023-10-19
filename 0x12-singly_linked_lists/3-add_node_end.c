#include "lists.h"

/**
  *add_node_end - adds node at the end of the list
  *@head : the current head of the list
  *@str : string data of the node to be added to the list
  *Return: the added node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;

	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	/*if there is no head, make this node the head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
