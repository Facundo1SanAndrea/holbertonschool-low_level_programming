#include "hash_table.h"
/**
 *hash_table_create - Write a function that creates a hash table.
 *@size: size of array
 *
 *Return: pointer to the newly created table, or NULL it fall
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nh= NULL;
	hash_node_t **n = NULL;

	if (!size)
		return (NULL);

	nh= malloc(sizeof(hash_table_t));
	if (!nh)
		return (NULL);

	nh->size = size;
	n = malloc(size * sizeof(char *));
	if (!n)
		return (NULL);
	nh->array = n;
	
	return (nh);
}
