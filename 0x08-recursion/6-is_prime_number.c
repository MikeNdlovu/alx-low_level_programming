#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - if n is prime number or not
 * @n: number being checked
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		n = 1;
	}

	else if (n % 2 = 0 || n % 3 = 0 || n % 5 = 0 || n % 7 = 0)
	{
		n = 0;
	}

	else
	{
		n = 1;
	}

	rerurn (n);
}
