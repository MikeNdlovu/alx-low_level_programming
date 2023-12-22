#include "hash_tables.h"

/**
 * hash_table_get - gets value using a key to find index in array
 * @ht: the pointer to thehash table
 * @key: the key being used to locate the value at index x in array
 * Return: the value retrieved or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int location;

	location = key_index((const unsigned char *)key, ht->size);

	if (ht->array[location] != NULL)
		return ((ht->array[location])->value);

	else
	return (NULL);
}
