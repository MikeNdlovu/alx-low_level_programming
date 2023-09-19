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

	for (b = 0; b < a / 2; b++)
	{
	_putchar(str[b]);
	}
	}
	_putchar('\n');
	}
}
