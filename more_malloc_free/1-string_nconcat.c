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
	unsigned int i = 0;
	unsigned int n1 = strlen(s1);
	unsigned int n2 = strlen(s2);
	unsigned int j = 0;
	
	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	result = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

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
		result[i + j] = '\0';
		if (n >= n2)
		{
			result[i + j] = s2[j];
		}
		result[i + j] = '\0';
		
		for (j = 0; j < n2; j++)
		{
			result[i + j] = s2[j];
		}
	}
	return (result);
}
