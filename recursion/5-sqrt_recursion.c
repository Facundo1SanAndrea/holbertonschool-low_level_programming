#include "main.h"

/**
 *isqrt_rec - calculate square root
 *@i: value
 *@n: value
 *Return: value
 */

int isqrt_rec(int i, int n)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);
	else
		return (isqrt_rec(i + 1, n));
}

/**
 *_sqrt_recursion - return square root
 *@n: value
 *Return: value
 */

int _sqrt_recursion(int n)
{
	return (isqrt_rec(0, n));
}
