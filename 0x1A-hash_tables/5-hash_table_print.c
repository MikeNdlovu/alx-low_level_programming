#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table being printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int range = 0;
	int init;

	printf("{");
	while (range < ht->size)
	{
	if (ht->array[range] != NULL)
	{
	init++;
	if (init == 1)
	printf("'%s': '%s'", (ht->array[range])->key, (ht->array[range])->value);

	else
	printf(", '%s': '%s'", (ht->array[range])->key, (ht->array[range])->value);
	}

	range++;
	}
	printf("}\n");
}
