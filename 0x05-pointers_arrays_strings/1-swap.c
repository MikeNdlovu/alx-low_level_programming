#include "main.h"

/**
 * swap_int - swaps 2 int values
 * @a: swaps to b
 * @b: swaps to a
 * Return: 0 always
 */

void swap_int(int *a, int *b)
{
	while (*a < *b && *a > *b)
	{
		*a = *b;
	break;
		*b = *a;
	}
}
