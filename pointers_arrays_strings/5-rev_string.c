#include "main.h"

/**
 *length - count num of char in passed string
 *@string: string given
 *Return: count
 */

int length(char *string)
{
	int count = 0;

	while (string[count] != '\0')
	{
		++count;
	}
	return (count);
}

/**
 *rev_string - print reverse
 *
 *@s: string to be reversed
 */
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
