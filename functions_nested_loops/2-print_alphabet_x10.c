#include "main.h"

/**
 * print_alphabet_10 - prints aplhabet
 * Return: zero
 */

void print_alphabet_x10(void)
{
	 int n = 0;

	 for (; n < 10; n++)
	 {
		 char i;
		 
		 for ( i = 'a'; i <= 'z'; i++ )
		 {
			 _putchar(i);
		 }
		 _putchar('\n');
	 }
}
