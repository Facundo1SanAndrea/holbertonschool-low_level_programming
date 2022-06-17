#include "main.h"

/**
 *leet - change letter into number
 *@s: value
 *Return: s
 */

char *leet(char *s)
{
	int i, j;
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i]; i++)
	{
		j = 0;
		while (up[j] && low[j] && num[j])
		{
			if (s[i] == up[j] || s[i] == low[j])
			{
				s[i] = num[j];
			}
			j++;
		}
	}
	return (s);
}
