#include "lists.h"

/**
 *add_node - function add node
 *@head: point node
 *@str: value
 *Return: value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;

	*head = n;

	return (*head);
}
