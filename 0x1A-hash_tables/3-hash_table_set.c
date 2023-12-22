#include "hash_tables.h"

/**
 * hash_table_set - adds or updates a new node in the hash table
 * @ht: pointer/represents the hash table being modified
 * @key: the key pointoiing to the stored data
 * @value: the value being stored in the bucket
 * Return: Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0)
		return (0);

	if (ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[key_index((const unsigned char *)key, ht->size)] == NULL)
	ht->array[key_index((const unsigned char *)key, ht->size)] = node;

	else
	ht->array[0] = node;

	return (1);
}
