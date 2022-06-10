#include "main.h"
#include <stdio.h>

/**
 *_isdigit - lower leter
 *@c: value checked
 * Return: zero
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
