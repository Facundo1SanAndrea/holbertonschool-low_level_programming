#include "main.h"

/**
 *_strcpy - copy and paste
 *@dest: value
 *@src: value
 *Return: zero
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
