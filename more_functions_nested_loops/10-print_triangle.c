#include "main.h"

/**
 *print_triangle - triangle
 *@size: diag
 */
void print_triangle(int size)
{
	int count;
	int space;

	for (count = 1; count <= size; count++)
	{
		for (space = size; space <= count; size--)
		{
			_putchar('#');
		}
	}
}
