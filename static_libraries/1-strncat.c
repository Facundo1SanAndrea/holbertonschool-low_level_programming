#include "main.h"
/**
 *_strlen - prints
 *@s: value
 *Return: zero
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 *_strncat - function string copy paste
 *@dest: value
 *@src: value
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;
	int c;

	c = _strlen(src);

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	if (c < n)
	{
		for (j = 0; j < c; j++)
		{
			dest[i + j] = src[j];
		}
		dest[i + j] = '\0';
	}
	if (c > n)
	{
		for (j = 0; j < n; j++)
		{
			dest[i + j] = src[j];
		}
	}
	return (dest);
}
