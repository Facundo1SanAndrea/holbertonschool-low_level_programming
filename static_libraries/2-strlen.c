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
