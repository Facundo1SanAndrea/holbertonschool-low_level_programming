#include "search_algos.h"
/**
 *linear_search - search linear and change order
 *@array: array of elements
 *@size: size
 *@value: value
 *Return: return value changes
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
