#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *init_dog - dog structure
 *@d: value
 *@name: value
 *@age: value
 *@owner: value
 *Return: zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
#endif
}
