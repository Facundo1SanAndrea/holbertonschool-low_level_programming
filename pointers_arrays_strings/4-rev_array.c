#include "main.h"

/**
 *reverse_array - reverse array
 *@a: value
 *@n: value
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = 0;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
