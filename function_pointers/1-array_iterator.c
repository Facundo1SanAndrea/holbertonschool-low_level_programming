#include "function_pointers.h"
#include<stdlib.h>
/**
 *array_iterator - give parameter on elements of array
 *@array: array
 *@size: size
 *@action: value
 *Return: zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
