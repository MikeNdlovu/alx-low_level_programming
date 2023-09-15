#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of lines to be drawn
 * Return: Always Success
 */
void print_line(int n)
{
	int y;
	int b;

	if (n < 1)
	{
	_putchar('\n');
	}

	else
	{
	for (b = 0; b < n; b++)
	{
	for (y = 0; y < b; y++)
	{
	_putchar(95);
	}
	}
	_putchar('\n');
	}
}
