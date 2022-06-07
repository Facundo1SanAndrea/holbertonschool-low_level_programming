#include<stdio.h>

/**
 * main - all possible combinations two digit
 * Return: zero
 */

int main(void)
{
	int i1, i2;
	
	for (i1 = 0; i1 < 9; i1++)
	{
		for (i2 = 1; i2 < 9; i2++)
		{
	
			if ( i1 == 8 && i2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
	
	return (0);
}
