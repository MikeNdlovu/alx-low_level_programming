#include "hash_tables.h"

/**
 * hash_table_delete - deletess a hash table
 * @ht: hash table being printed
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int range = 0;

	while (range < ht->size)
	{
	if (ht->array[range] != NULL)
	{
	free((ht->array[range])->key);
	free((ht->array[range])->value);
	}

	range++;
	}
	free(ht->array);
	free(ht);
}
