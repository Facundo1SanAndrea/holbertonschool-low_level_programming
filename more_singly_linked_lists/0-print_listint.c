#include "lists.h"

/**
 *print_listint - prints elements listint_t list.
 *@h: pointer
 *Return: sum
 */
size_t print_listint(const listint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
