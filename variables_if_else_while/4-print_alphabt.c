#include<stdio.h>

/**
 * main - ptints alphabet not e or q
 * Return: zerp
 */

int main(void)
{
	char alph;

	for (alph= 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e' || alph == 'q')
		{
			alph++;
		}
		putchar(alph);
	}
	putchar('\n');

	retuurn (0);

}
