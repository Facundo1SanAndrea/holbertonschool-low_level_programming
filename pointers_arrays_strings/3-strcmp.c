#include "main.h"

/**
 *_strcmp - value
 *@s1: value
 *@s2: value
 *Return : zero
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		diff = (s1[i] - s2[i]);
	
		if (diff != 0)
			break;
	}
	if (diff == 0)
		return (0);
return (diff);
}
