#include<stdio.h>

/**
 * main - Write a program that prints all the numbers of base sixteen in lowercase, followed by a new line.
 * Return: zero
 */

int main(void)
{
	int i= 0;
	char alph;

	for (i = 48; i <= 57; i++);
	{
		putchar(i);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	
	putchar('\n');
	
	return (0);

}	
