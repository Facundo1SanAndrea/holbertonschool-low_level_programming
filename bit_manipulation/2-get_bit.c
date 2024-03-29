#include "main.h"

/**
 *get_bit - return value bit
 *@n: value
 *@index: bit
 *Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n >> index & 1);
}
