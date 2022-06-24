#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 *malloc_checked - return pointer to the allocated memory
 *@b: value given
 *Return: if fails 98
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}
	else
		return (result);
}
