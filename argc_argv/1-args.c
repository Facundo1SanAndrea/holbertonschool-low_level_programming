#include "main.h"
#include<stdio.h>

/**
 *main - return number argu
 *@argc: value
 *@argv: value
 *Return: value
 */

int main( int argc, char **argv)
{
	printf("%d\n", argc);

	printf("%s\n", *argv);

	return (argc);
}
