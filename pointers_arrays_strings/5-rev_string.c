#include "main.h"

/**
 * rev_string - change str
 * @s: value check
 */

int length(char* string)
{
	int count = 0;

	while(string[count] != '\0')
	{
		++count;
	}
	return count;
}

void rev_string(char *s)
{
	char temp;
	int i, j, n;
	n = length(s);

	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
