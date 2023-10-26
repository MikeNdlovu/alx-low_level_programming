#include "main.h"
#include <stdio.h>

/**
 * get_bit - finds bit at a given index
 * @n: number generating binary
 * @index: index in binary to be returned at
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	n = n >> 1;

	if (!n)
	return (-1);

	else
	return ((n & 1));
}
