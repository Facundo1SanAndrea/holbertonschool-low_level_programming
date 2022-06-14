#include "main.h"

/**
 *  swap_int - swap numbers
 * @a:number define
 * @b:define number
 *Return: zero
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
