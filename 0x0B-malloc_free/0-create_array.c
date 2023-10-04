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
	int inc;
	int len;
	char *arr;

	arr = malloc(size * sizeof(*arr));
	len = strlen(arr);

	for (inc = 1; inc < len; inc++)
	{
		arr[inc] = c;
	}
	free(arr);

	return (0);
}
