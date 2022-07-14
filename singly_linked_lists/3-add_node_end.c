#include "lists.h"

/**
 *add_node_end - function adds new node
 *@head: point
 *@str: value
 *Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);


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
