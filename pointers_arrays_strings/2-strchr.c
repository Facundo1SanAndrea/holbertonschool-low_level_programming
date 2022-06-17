#include "main.h"
#include <stddef.h>
/**
 *_strchr - return a pointer direction
 *@s: value
 *@c: value
 *Return: strin
 */

char *_strchr(char *s, char c)
{
	if (NULL == s)
		return (NULL);
	
	while(*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
