#include "main.h"

/**
 *factorial - give factorial number
 *@n : value to check
 *Return: zero
 */

int factorial(int n)
{
	int fact;

	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
