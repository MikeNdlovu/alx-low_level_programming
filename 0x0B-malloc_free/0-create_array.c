#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an initialised array of chars
 * @size: number of chars to be created
 * @c: charecter to be initialised
 * Return: success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int inc = 0;
	char *ar;

	(void)size;

	ar = malloc(size * sizeof(char));

	while (inc < size)
	{
		ar[inc] = c;
		inc++;
	}

	if (size == 0)
	{
		printf("failed to allocate memory");
		return (0);
	}

	return (ar);
}
