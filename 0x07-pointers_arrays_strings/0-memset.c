#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - a function that sets a constnt byte in array
 * @s: pointer to string being modified
 * @b: const char
 * @n: number of characters being set
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
	s[p] = b;
	}
	return (s);
}
