#include "main.h"
/**
 * _isalpha - prints alph
 * @c: variable to check
 * Return: zero
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else if ( c >= 65 && c <= 90)
	       return (1);

	else
		return (0);
}
