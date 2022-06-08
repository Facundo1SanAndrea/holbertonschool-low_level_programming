#include "main.h"

/**
 * int_islower(int c) - print c if returs  one
 * Return: zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
