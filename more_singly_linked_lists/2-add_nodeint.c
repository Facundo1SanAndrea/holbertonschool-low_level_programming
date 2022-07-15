#include "lists.h"

/**
 *add_node - function add node
 *@head: point node
 *@num: value
 *Return: value
 */

listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *n;

	n = malloc(sizeof(listint_t));

	if (n == NULL)
	{
		return (NULL);
	}
	n->num = num;
	n->next = *head;

	*head = n;

	return (*head);
}
