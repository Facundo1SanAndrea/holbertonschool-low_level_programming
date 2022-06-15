#include "main.h"
#include<stdio.h>
/**
 * print_array - value array
 * @n: value check
 * @a: value check
 */

void print_array(int *a, int n)
{
	int j = 0;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		
		if (j == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
