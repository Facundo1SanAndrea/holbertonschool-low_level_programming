#include "main.h"

/**
 * _strlen - pints number string
 * @s: value check
 * Return: zero
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 *puts_half - pritn half string
 *@str: value
 */

void puts_half(char *str)
{
	int cmid = 0;
	int i = 0;
	int c = 0;

	c = _strlen(str);

	if (c % 2 == 0)
	{
		cmid = c / 2;
	}
	else
		cmid = (c - 1) / 2;

	for (i = cmid; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
