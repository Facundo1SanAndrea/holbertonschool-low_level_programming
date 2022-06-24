#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 *_string_nconcat - concatenate string
 *@s1: value
 *@s2: value
 *@n: value
 *Return: value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, n1, n2;
	
	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	n1 = strlen(s1);
	n2 = strlen(s2);

	result = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 4);

	if (result == NULL)
	{
		return (NULL);
	}

	else 
	{
		for (i = 0; i < n1; i++)
		{
			result[i] = s1[i];
		}
		if (n >= n2)
		{
			for (j = 0; j < n2; j++)
			{
				result[i + j] = s2[j];
			}
			result[i + j] = '\0';
		}
		if (n < n2)
		{	
			for (j = 0; j < n; j++)
			{
				result[i + j] = s2[j];
			}
			result[i + j] = '\0';
		}
	}
	return (result);
}
