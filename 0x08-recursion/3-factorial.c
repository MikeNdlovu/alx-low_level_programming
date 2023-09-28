#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - function that prints a numbers factorial
 * @n: number to be printed
 * Return: Success
 */
int factorial(int n)
{
	if (n >= 0)
	{
	return (n * factorial(n - 1));
	}

	else if (n < 0)
	{
	return (-1);
	}
	return (0);
}
