#include "main.h"
#include <stdio.h>

/**
 *_isdigit - lower leter
 *@c: value checked
 * Return: zero
 */

int _isdigit(int c)
{
	if (c >= '39' && c <= '96')
		return (0);
	else
		return (1);
}
