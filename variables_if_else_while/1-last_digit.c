#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - script that assign a random number to the variable.
 *  Return: is zero
 */

int main(void)
{
	int n;
	int lastdig = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

	if (lastdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
	}
	if (lastdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdig);
	}
	if (lastdig < 6 && lastdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	}

	return (0);
}
