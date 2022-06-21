#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *main - mult num
 *@argv: value to add
 *@argc: value to add
 *Return: value
 */

int main(int argc, char *argv[])
{
	int i, j, resu;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	resu = i * j;

	printf("%d\n", resu);

	return (0);
}
