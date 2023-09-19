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
	int a;

	a = 0;

	while (str[a] != '\0')
	{
	a++;
	}

	for (a = 0; a > a / 2; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
