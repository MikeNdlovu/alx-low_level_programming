#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - prints the length of a string
 * @s: string length being printed
 * Return: 0always
 */

int _strlen(char *s)
{
	int length;
	int p;

	p = *s;

	length = strlen(p);
	
	_putchar(length);
	_putchar('\n');
}
