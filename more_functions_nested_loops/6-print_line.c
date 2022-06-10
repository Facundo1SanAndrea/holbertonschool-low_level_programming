#include "main.h"

/**
 * print_line - prints aplhabet
 * @n:value check
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
