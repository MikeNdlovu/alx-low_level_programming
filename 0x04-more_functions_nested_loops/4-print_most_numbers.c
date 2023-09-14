#include "main.h"

/**
 * print_most_numbers  - prints no. 0 - 9 not 2 & 4
 * Return: Always Success
 */
void print_most_numbers(void)
{
	
	int p;

	for (p = 0; p <= 9; p++)
	{
	if (p != 2 && p != 4)
	{
	_putchar(p + '0');
	}
	}
	_putchar('\n');
}
