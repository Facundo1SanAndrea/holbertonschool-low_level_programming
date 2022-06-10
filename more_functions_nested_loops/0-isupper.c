#include "main.h"
#include <stdio.h>

/**
 *_isupper - lower leter
 *Return: zero
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else 
		return (1);
}
