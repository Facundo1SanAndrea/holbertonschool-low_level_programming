#include "main.h"
#include<stdlib.h>
#include <stddef.h>

/**
 *_strlen - prints number string
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
 *_strdup - return copy str
 *@str: value
 *Return: value
 */

char *_strdup(char *str)
{
	char *result;
	char *prsc = str;
	char *pdst;

	if (str == NULL)
	{
		return (NULL);
	}

	result = malloc(_strlen(str) + 1);
	pdst = result;

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*prsc != 0)
		{
			*pdst = *prsc;
			pdst++;
			prsc++;
		}
		*pdst = '\0';
	}
	return (result);

}
