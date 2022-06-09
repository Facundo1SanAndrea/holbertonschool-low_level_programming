#include "main.h"
/**
 * times_table - prints number
 * Return: zero
 */

void times_table(void)
{
	int num1;
	int mult;

	for (num1 = 0; num1 < 10; num1++)
	{
		int num2;

		for (num2 = 0; num2 < 10; num2++)
		{
			mult = num1 * num2;
			if (num2 != 0)
			{
				_putchar(' ');

				if (mult < 10)
				{
					_putchar(' ');
				}
			}

			if (mult >= 10)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
				_putchar(mult + '0');
			if (num2 == 9)
			{
				_putchar('\n');
			}
			else
				_putchar(',');
		}
	}
}
