#include "main.h"

/**
 *clear_bit - value of bit
 *@n: value
 *@index: value
 *Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
