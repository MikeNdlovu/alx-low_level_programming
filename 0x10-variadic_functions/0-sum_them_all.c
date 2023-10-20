#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums arguments together
 * @n: ints
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	int sum;
	unsigned int p = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	return (0);

	else
	while (p < n)
	{
	x = x + va_arg(args, int);
	sum = x;
	p++;
	}
	va_end(args);
	return (sum);
}
