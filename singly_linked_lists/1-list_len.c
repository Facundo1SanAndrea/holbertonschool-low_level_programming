#include "lists.h"

/**
 *list_len - returns the number of elements
 *@h: pointer
 *Return: sum
 */
size_t list_len(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		h = h->next; 
		sum++;
	}
	return (sum);
}
