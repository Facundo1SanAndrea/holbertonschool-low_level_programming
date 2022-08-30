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
	size_t idx;

	if (!array || !size || !value)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
