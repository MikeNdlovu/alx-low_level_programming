#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_array - reverse an array
 * @a: reverse apperand
 * @n: number of arrays
 */
void reverse_array(int *a, int n)
{
	int b, cv;

	for (b = n - 1; b >= n / 2; b--)
	{
		cv = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = cv;
	}
}
