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
	int a, c;

	a = 0;

	while (str[a] != '\0')
	{
	a++;
	}

	for (c = 0; c > a / 2; c++)
	{
	if (c <= a)
	{
	_putchar(str[c]);
	}
	}
	_putchar('\n');
}
