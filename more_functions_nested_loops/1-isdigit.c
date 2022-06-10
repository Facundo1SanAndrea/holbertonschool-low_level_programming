#include "main.h"
#include <stdio.h>

/**
 *_isdigit - lower leter
 *@c: value checked
 * Return: zero
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
