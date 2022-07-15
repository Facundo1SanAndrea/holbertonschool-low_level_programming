#include "lists.h"

/**
 *free_listint2 - function frees listint_t list.
 *@head: point
 */
void free_listint2(listint_t **head)
{
	listint_t *n, *new;

	if (head == NULL)
	{
		return;
	}
	n = *head;

	while (n != NULL)
	{
		new = n->next;
		free(n);
		n = new;
	}
	*head = NULL;
}
