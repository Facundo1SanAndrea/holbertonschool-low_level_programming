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
	res = malloc(sizeof(int) * (diff + 1));

	if (res == NULL)
	{
		resturn (NULL);
	}
	i = 0;
	for (a = min; a <= mas; a++)
	{
		res[i] = a;
		i++;
	}
	return (res);
}
