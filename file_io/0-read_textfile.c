#include "main.h"
#include <unistd.h>
#include<stdio.h>
/**
 *read_textfile - funtion read and prints
 *@filename: value
 *@letters: letters
 *Return: value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o , r, w;
	char *p;
	
	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
		if (p == NULL)
			return (0);

		o = fopen(filename, O_RDONLY, "o");
		r = fopen(filename, letters, p);
		w = fopen(filename, O_RDWR, letters);

		if (r == NULL || w == NULL || o == NULL)
			return (0);





}
