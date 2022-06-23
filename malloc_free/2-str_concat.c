#include "main.h"
#include <stdlib.h>
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
 *str_concat - concatenate string
 *@s1: value
 *@s2: value
 *Return: value or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc(sizeof(char) * _strlen(s1) + _strlen(s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			result[i] = s1[i];
		}
		for (j = 0; j < _strlen(s2); j++)
		{
			result[i + j] = s2[j];
		}
		result[i + j] = '\0';
	}

return (result);
}
