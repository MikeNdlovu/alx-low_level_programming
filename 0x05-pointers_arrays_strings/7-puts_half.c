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

	while (str[a] != '\0')
	{
	a++;
	}

	for (b = 0; b < a / 2; b++)
	{
	/*b++;*/
	_putchar(str[b]);
	}

	/*for (c = b + 1; c > b; c++)
	{
	while (c < a)
	{
	_putchar(str[c]);
	c++;
	}
	}*/
	_putchar('\n');
}
