#include "main.h"
#include <stdio.h>

/**
 *_isupper - lower leter
 *@c: value checked
 * Return: zero
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
