#include "main.h"

/**
 *_memset - change value
 *@s: value
 *@b: value
 *@n: value
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
