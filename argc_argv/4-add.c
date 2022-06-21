#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 *main - give back sum two agrv
 *@argv: value
 *@argc: value
 *Return: value
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);

	}

	printf("%d\n", sum);

	return (0);
}
