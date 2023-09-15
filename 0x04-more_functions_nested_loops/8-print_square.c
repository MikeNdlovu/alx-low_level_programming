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

	a = b = 1;
	
	if (size < 1)
	{
	_putchar('\n');
	}

	else
	for (a = 1; a <= size; a++)
	{
	for (b = 1; b <= size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
