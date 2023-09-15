#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of square
 * Return: zero
 */
void print_square(int size)
{
	int a, b;

	a = b = size;
	
	if (size < 1)
	{
	_putchar('\n');
	}

	else
	for (a = size; a <= size; a++)
	{
	for (b = size; b <= size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	_putchar(35);
	}
	_putchar('\n');
}
