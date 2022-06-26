#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *array_range - array range
 *@min: value
 *@max: value
 *Return:value
 */

int *array_range(int min, int max)
{
	int *res;
	int i, j, a;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min;
	res = malloc(sizeof(int) * (j + 1));

	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (a = min; a <= max; a++)
	{
		res[i] = a;
		i++;
	}
	return (res);
}
