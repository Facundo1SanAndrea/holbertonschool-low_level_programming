#include "lists.h"

/**
 *free_list - free the memory
 *@head: pointer
 *
 */

void free_list(list_t *head)
{
	list_t *now;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now->str);
		free(now);
	}
}
