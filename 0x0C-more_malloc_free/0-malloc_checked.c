#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates mem
 * @b: number of bytes to be allocated
 * Return: success
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b * sizeof(int));

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
