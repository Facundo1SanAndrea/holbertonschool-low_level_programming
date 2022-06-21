#include "main.h"
/**
 * _abs - absolute value
 * @i: value to check
 * Return: zero
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	if (i == 0)
	{
		return (0);
	}
	if (i < 0)
	{
		i = (-i) * 1;
		return (i);
	}
	_putchar('\n');
	return (0);
}
