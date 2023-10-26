#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets bit to 1
 * @n: pointer to the bit
 * @index: position to be changed
 * Return: 1(success) -1(else)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int change;

	if (index > sizeof(unsigned int) * 8)
	return (-1);

	else
	change = 1;
	change = change << index;
	if (((*n >> index) & 1) == 1)
	*n = change ^ *n;
	return (1);
}
