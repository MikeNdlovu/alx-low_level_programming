#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - puts last half of the string
 * @str: string being modified
 * Return: Always success
 */
void puts_half(char *str)
{
	int a, b, c;
	a = 0;

	while (str[a] < '\0')
	{
	a++;
	}

	for (b = a / 2; b <= a; b++)
	{
	for (c = b + 1; c <= a; c++)
	{
	_putchar(str[c]);
	}
	}
	_putchar('\n');
}
