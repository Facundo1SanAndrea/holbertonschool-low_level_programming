#include "main.h"

/**
 *cap_string - change lowercase into up
 *@s: value
 *Return: value
 */

char *cap_string(char *s)
{
	char sib[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		for (j = 0; sib[j]; j++)
		{
			if (s[i - 1] == sib[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
