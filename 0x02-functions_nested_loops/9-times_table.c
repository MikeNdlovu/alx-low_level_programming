#include "main.h"

/**
 * times_table
 * Return: A
 * ways (success)
 */
void times_table(void)
{
	int n;
	
	n = '0';

	while (n >= '0')
	{
	_putchar(n);
	_putchar(',');
	_putchar(' ');
	n = (n + '9');
	}
}
