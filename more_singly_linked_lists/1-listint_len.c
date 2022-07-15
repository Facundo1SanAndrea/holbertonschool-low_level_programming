#include "lists.h"

/**
 *listint_len - returns the number of elements
 *@h: pointer
 *Return: sum
 */
size_t listint_len(const listint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
