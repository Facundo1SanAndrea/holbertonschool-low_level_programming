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
	unsigned long int hash_function = 0;

	if (!ht || !key)
		return (NULL);
	hash_function = key_index(key, ht->size);
	if (ht->array[hash_function])
	{
		while (ht->array[hash_function])
		{
		if (!strcmp(ht->array[hash_function]->key, key))

			return (ht->array[hash_function]->value);
		ht->array[hash_function] = ht->array[hash_function]->next;
		}

			return (NULL);
	}
	return (NULL);
}
