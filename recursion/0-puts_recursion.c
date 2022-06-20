#include "main.h"

/**
 *_puts_recursion - prints in recursion
 *@s: value
 *Return: value
 *
 */


void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
