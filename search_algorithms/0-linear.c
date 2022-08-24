#include "search_algos.h"
/**
 *linear_search - Given an array arr[] of N elements, i
 the task is to write a function to search a given element x in arr[].
 *@array: array of elements
 *@size: size
 *@value: value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			print_array(array, size);
			return (i);
		}
	}
	return (-1);
}
