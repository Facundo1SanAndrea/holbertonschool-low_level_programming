#include "lists.h"

/**
 *add_nodeint_end - function adds node.
 *@head: pointer to pointer
 *@n: value
 *Return: value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		old = *head;
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}
	return (new);

}
