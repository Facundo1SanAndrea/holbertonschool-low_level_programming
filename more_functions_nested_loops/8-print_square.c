#include "main.h"

/**
 *print_square - print
 *@size: value
 */
void print_square(int size)
{
	int count;
	int spc;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (spc = 1; spc <= size; spc++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
