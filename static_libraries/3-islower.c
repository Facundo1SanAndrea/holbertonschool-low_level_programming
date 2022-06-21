#include "main.h"

/**
 * _islower - print c if returs  one
 * @c: variable to check
 * Return: zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
