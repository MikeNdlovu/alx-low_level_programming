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
	if (n % n == 0)
	{
		n = n / n;
	}

	else if (n % n != 0)
	{
		n = -1;
	}

	return (n);
}
