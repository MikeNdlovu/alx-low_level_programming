#include "main.h"
#include <stdio.h>

/*
 * flip_bits - returns no. of bits needed to flip to get to other no.
 * @n: number 1 being evaluated
 * @m: number 2 being compared with
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;

	a = n ^ m;
	for (b = 0; a > 0;)
	{
	if ((a & 1) == 1)
	b++;
	a = a >> 1;
	}
	return (b);
}
