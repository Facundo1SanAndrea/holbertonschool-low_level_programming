#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *struct dog - type of the dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *struct dog_t - dog
 *@name: string
 *@age: value
 *@owner: value
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
