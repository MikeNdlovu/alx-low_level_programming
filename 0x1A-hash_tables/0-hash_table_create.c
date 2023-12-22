#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the has table
 * Return: Success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t));

	if (hash_table->size != size)
		return (NULL);

	for (i = 0; i < hash_table->size; i++)
	hash_table->array[i] = NULL;

	if (hash_table == NULL)
		return (NULL);

	return (hash_table);
}
