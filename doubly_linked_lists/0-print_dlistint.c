#include "lists.h"
/**
* print_dlistint - print content of a list
* @h: number
* Return: sum
*/
size_t print_dlistint(const dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
