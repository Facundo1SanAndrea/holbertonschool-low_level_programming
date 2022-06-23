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
	char *result = malloc(_strlen(str) + 1);
	char *prsc = str;
	char *pdst = result;

	if (str == NULL)
	{
		return (NULL);
	}

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
