#include "main.h"

/**
 * _puts - pritn string
 * Return: zero
 * @str: value check
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
