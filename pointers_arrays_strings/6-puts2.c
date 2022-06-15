#include "main.h"
#include "main.h"

/**
 * _strlen - prints number string
 * @s: vlue checked
 * Return:sero
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * puts2 - print every other
 * @str: value check
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
