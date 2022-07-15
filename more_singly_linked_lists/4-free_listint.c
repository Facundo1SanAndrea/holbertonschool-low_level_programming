#include "lists.h"

/**
 *free_listint - free the memory
 *@head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
