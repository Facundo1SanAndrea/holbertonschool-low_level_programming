#include "main.h"

/**
 * print_rev - prints back
 *@s: value to check
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while(s[a] != '\0')
	{
		a++;
	}
	
	b = a - 1;
	while(s[b] != 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
