#include "main.h"

/**
 * print_sign - classifies +,-
 * @n: number identified
 * Return: Always (success)
 */

int print_sign(int n)
{
	if (n > '0')
	{
	_putchar('+');
	return (1);
	}

	else if (n > '-1' && n < '1')
	{
	_putchar('0');
	return (0);
	}

	else if (n < '0')
	{
	_putchar('-');
	return (1);
	}
	return (0);
}
