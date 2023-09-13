#include "main.h"

/**
 * print_to_98 - prints n to 98
 * @n: starting int point
 * Return: zero
 */

void print_to_98(int n)
{
	n = 0;

	for (n = 0; n <= 98; n++)
	{
	_putchar(n);
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
}
