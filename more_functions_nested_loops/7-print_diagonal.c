#include "main.h"

/**
 *print_diagonal - print
 *@n: value
 */
void print_diagonal(int n)
{
	int count;
	int spc;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			for (spc = 1; spc <= count; spc++)
			{
				if (spc == count)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
