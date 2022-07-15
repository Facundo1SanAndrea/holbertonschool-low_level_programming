#include "lists.h"

/**
 *add_node - function add node
 *@head: point node
 *@num: value
 *Return: value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
