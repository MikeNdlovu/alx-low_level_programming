#include "main.h"

/**
 * print_diagonal - prints \
 * @n: number of time \ gets printed
 * Return: Always Success
 */
void print_diagonal(int n)
{
	int b;
	int c;

	c = '\';
	b = 0;

	if (n < 1)
	{
	_putchar('\n');
	}
	else
	for (b = 0; b < n; b++)
	{
	for (b = 0; b < n - 1; b++)
	{
	{
	_putchar(' ' + '0');
	}
	}
	{
	_putchar(c + '0');
	}
	_putchar('\n');
	}
}
