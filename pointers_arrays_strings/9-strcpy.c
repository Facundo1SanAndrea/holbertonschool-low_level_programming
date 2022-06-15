#include "main.h"

/**
 * _strcpy - copy and paste
 *@dest: value
 *@src: value
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
