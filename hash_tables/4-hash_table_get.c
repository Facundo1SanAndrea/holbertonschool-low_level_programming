#include "hash_tables.h"

/**
 * hash_table_get - Write a function that retrieves
 * a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}

	return (0);
}
