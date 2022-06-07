#include<stdio.h>

/**
 * main - prints the number zero to nine
 * Return: zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);

}
