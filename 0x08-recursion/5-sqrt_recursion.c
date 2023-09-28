#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - prints squar root of n
 * @n: number to be rooted
 * Reurn: success
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	i++;
	if (i < 10000)
	{
	if (n % n == 0 && n == i * i)
	{
		n = i;
	}

	else if (n != i * i)
	{
		n = -1;
	}
	}

	return (n);
}
