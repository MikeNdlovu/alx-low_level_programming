#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string and new line to stdout
 * @str: strng being printed
 * Return: 0always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
