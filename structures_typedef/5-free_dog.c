#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - fre the dog
 *@d: value
 *Return: zero
 */
void free_dog(dog_t *d)
{
	if(d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
