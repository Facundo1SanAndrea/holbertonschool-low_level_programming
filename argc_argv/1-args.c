#include "main.h"
#include<stdio.h>

/**
 *main - return number argu
 *@argc: value
 *@argv: value
 *Return: value
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
