#include <stdio.h>
#include "main.h"

/**
 * bi - convetrs and prints decimal to binary
 * @n: decimal being converted
 * Return: void
 */
void bi(unsigned long int n)
{

	if (n == 0)
	return;

	bi(n >> 1);
	if ((n & 1) == 1)
	putchar('1');
	if ((n & 1) == 0)
	putchar('0');
}
/**
 * print_binary - prints binary format of decimal
 * @n: decimal being convreted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	putchar('0');

	else
	{
		bi(n);
	}
}
