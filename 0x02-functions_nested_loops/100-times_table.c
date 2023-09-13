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

	for (a = 0; a <= 12; a++)
	{
	for (b = 0; b <= 12; b++)
	{
	n = a *b;
	if (a < 1 && b < 4)
	{
	if (a < 1 && b > 2)
	{
	_putchar(n);
	}
	printf("%d,   ", n);
	}
	_putchar('\n');
	if (a > 0 && b < 4)
	{
	printf(",   %d", n);
	}
	_putchar('\n');
	}
	}
}
	
