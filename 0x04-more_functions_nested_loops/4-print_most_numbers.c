#include "main.h"

/**
 * print_most_numbers  - prints no. 0 - 9 not 2 & 4
 * Return: answer
 */
void print_most_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
	if (p != 2 && p != 4)
	{
	_putchar(p);
	}
	_putchar('\n')
	}
}
