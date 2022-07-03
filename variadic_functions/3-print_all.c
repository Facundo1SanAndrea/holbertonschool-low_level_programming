#include "variadic_functions.h"
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

/**
 *print_all - print
 *@format: value
 *Return: value
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *s;
	va_list par;

	i = 0;
	va_start(par, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(par, int));
					break;
			case 'i':
					printf("%d", va_arg(par, int));
					break;
			case 'f':
					printf("%f", va_arg(par, double));
					break;
			case 's':
					s = va_arg(par, char *);
					s ? printf("%s", s) : printf("(nil)");
					break;
		}
		if ((format[i] == 'f' || format[i] == 'i' ||
			format[i] == 's' || format[i] == 'c') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(par);
}
