#include "main.h"
#include<string.h>
/**
 *_strlen - count string
 *@s: value
 *Return: c
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * _strcat - concatenate string
 * @src: value
 * @dest: value
 *Return: value
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
