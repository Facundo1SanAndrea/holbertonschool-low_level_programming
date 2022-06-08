#include "main.h"

/**
 * int _islower(int c) - print c if returs  one
 * Return: zero
 * @n
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
