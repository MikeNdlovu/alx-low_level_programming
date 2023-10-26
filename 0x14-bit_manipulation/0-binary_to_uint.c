#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string to be converted
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, len, value = 1;

	len = strlen(b);

	if (b == NULL)
	return (0);

	for (i = (len - 1); i >= 0; i--)
	{
	if (b[i] == '1')
	decimal = decimal + value;
	value = value * 2;

	if (b[i] != '0' && b[i] != '1')
        return (0);
	}

	return (decimal);
}
