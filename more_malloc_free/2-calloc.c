#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *_calloc - allocates memory for an array of nmemb elements of size bytes
 *@nmemb: value
 *@size: value
 *Return: value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	ptr = malloc(nmemb * size);

	if (nmemb == 0)
		return (NULL);
	
	if (size == 0)
		return (NULL);
	
	i = 0;

	p = ptr;

	while (i < nmemb * size)
	{
		p[i] = 0;

		i++;
	}
	return (ptr);
}
