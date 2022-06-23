#include "main.h"
#include<stdlib.h>

/**
 *create_array - return sapce memory
 *@size: value
 *@c: value
 *Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	else
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	return (str);
}
