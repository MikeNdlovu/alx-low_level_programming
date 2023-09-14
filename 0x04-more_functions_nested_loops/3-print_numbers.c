#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints no. 0 - 9
 * Return: Always success
 */
void print_numbers(void)
{
	int n;

	n = 0;

	for (n = 0; n <= 9; n++)
	{
	_putchar(n);
	_putchar('\n');
	}
	return (0);
}
