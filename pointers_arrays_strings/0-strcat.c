#include "main.h"
/**
 * _strlen - count string
 *@s: value
 *Return: c
 */

int strlen(char *s)
{
	int i = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

char *_strcat(char *dest, char *src)
{
	char *ptr = *dest + strlen(*dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (*dest);
}
