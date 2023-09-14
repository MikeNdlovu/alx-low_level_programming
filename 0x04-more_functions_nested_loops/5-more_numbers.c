#include "main.h"

/**
 * more_numbers - print no. 0 - 14 10x
 * Return: Success
 */
void more_numbers(void)
{
	int l;
	int m;

	l = 0;
	while (l < 10)
	{
	m = 0;

	while (m < 15)
	{
	if (m > 9)
	{
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	}
	else
	{
	_putchar(m + '0');
	}
	m++;
	}
	_putchar(\n);
	l++;
	}
}
