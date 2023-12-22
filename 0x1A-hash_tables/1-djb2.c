#include "hash_tables.h"

/**
 * hash_djb2 - generates a unique reference(hash value) using input value
 * @str: input value
 * Return: success
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
