#include "variadic_functions.h"
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>

/**
 *print_numbers - print number
 *@separator: string pass
 *@n: number passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
