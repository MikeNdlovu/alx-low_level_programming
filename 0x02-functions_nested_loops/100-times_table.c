#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: times table to be printed
 * Return: Always (0))
 */
void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= 15; a++)
	{
	for (b = 0; b <= 15; b++)
	{
	n = a *b;
	if (a == 0)
	{
	putchar(n + '0');
	}
	else if (n < 10 && a != 0)
	{
	printf(",   ");
	_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
	printf(",  ");
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
	printf(", ");
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	}
	_putchar('\n')
}
}
}
