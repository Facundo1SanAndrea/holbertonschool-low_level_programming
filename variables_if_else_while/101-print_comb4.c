#include<stdio.h>

/**
 * main - prints
 * Return: zero
 */

int main(void)
{
	int i1, i2, i3;
	
	for (i1 = 0; i1 < 9; i1++)
	{
		for (i2 = i1 + 1; i2 < 10; i2++)
		{
			for (i3 = i2 + 1; i3 < 10; i3++)
			{
				putchar(i1 + '0');
				putchar(i2 + '0');
				putchar(i3 + '0');
				
				if ( i1 == 7 && i2 == 8 && i3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
