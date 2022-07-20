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
	int o, r, w;
	char *p;

	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
		if (p == NULL)
			return (0);

		o = open(filename, O_RDONLY);
		r = read(o, p, letters);
		w = write(STDOUT_FILENO, p, r);

		if (r == -1 || w == -1 || o == -1)
		{
			free(p);
			return (0);
		}

		free(p);
		close(o);

		return (w);
}
