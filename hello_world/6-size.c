#include<stdio.h>

/**
 * main - prints size of various types
 * Return: zero
 */

int main(void)
{
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
