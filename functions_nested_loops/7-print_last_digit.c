#include "main.h"
/**
 * print_last_digit - prints
 * @c: variable to check
 * Return: zero
 */
int print_last_digit(int)
{
	scanf ("%d", &num);
	digit = num % 10;
	
	_putchar("%d: %d", num, digit);
	
	return (0);
}
