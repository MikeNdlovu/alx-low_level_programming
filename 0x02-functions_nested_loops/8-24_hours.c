#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * @J: the hours
 * Return: Always (success)
 */

void jack_bauer(void)
{
	int b, k;

	b = 0;

	while (b < 24)
	{
	k = 0;
	while (k < 60)
	{
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');
	_putchar(':')
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	k++;
	}
	b++
	}
}
