#include<stdio.h>

/**
 * main - prints random number
 * Return: zero
 */

int main(void)
{
	int i1, i2, i3, i4;

	for (i1 = 0; i1 <= 9; i1++)
	{
		for (i2 = 0; i2 <= 8; i2++)
		{
			for (i3 = 0; i3 <= 9; i3++)
			{
				for (i4 = 1; i4 <= 9; i4++)
				{
					putchar(i1 + '0');
					putchar(i2 + '0');
					putchar(' ');
					putchar(i3 + '0');
					putchar(i4 + '0');

					if (i1 == 9 && i2 == 8 && i3 == 9 && i4 == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
