#include "main.h"

/**
 * print_most_numbers - prints aplhabet
 * Return: zero
 */

void print_most_numbers(void)
{
	int n = 48;

	for (; n < 58; n++)
	{
		if (n == 50)
		{
			n++;
		}
		if (n == 52)
		{
			n++;
		}
		_putchar(n);
	}
	_putchar('\n');
}
