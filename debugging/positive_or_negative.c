#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - scritp returns a random number
 * Return: Random number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);

	return (0);
}
