#include "main.h"

/**
 *check - prime number value zero
 *@n: value
 *@i: value
 *Return: zero
 */

int check(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check(n, i - 1));
		}
	}
}

/**
 *is_prime_number - prime number
 *@n: number value
 *Return: value
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else
		return (check(n, n / 2));
}
