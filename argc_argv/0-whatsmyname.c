#include<stdio.h>
#include "main.h"

/**
 *main - change name of a file
 *@argc: value
 *@argv: value
 *Return: value
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
