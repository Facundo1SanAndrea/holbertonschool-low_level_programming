#include "lists.h"

/**
 *pop_listint - function deletes node listint_t
 *@head: pointer
 *Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
