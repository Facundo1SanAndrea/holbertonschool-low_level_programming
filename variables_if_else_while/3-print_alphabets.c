#include<stdio.h>

/**
 * main - print alphabet
 * Return: zero
 */

int main(void)
{
	char alph;
	char ALPH;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	       	putchar(alph);
	}
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
	       	putchar(ALPH);
	}
	putchar('\n');
	
	return (0);

}	
