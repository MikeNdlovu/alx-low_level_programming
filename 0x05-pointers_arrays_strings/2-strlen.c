#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string length being printed
 * Return: 0always
 */

int _strlen(char *s)
{
	int length;

	length = strlen(*s);
	
	_putchar(length);
	_putchar('\n');
}
