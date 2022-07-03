#include "variadic_functions.h"
#include<stdio.h>
/**
 *print_strings - print
 *@separator: the string
 *@n: value
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *new_arg;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		new_arg = va_arg(str, char *);

		if (new_arg == NULL)
			printf("(nil)");
		else
			printf("%s", new_arg);
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
}
