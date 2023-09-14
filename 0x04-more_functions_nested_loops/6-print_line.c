#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of lines to be drawn
 * Return: Always Success
 */
void print_line(int n)
{
	int y;

	y = '_';
	int b;

	if (n < 1)
	{
	_putchar('\n');
	}

	else
	{
	for (b = 0; b < n; b++)
	{
	_putchar(y);
	}
	_putchar('\n');
	}
}
