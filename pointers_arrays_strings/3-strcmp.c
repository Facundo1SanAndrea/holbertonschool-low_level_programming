#include "main.h"

/**
 *_strcmp - value
 *@s1: value
 *@s2: value
 *Return : zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; 
	int flag =0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0 && s1[i] == '\0' && s2[i] == '\0')
	{
		return (1);
	}
	else
		return (0);
}
