#include "hash_tables.h"

/**
 * key_index - gets index of where a key is stored in a list
 * @key: the key being stored
 * @size: size of the array
 * Return: Success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % (size));
}
