#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - a function that sets a constnt byte in array
 * @s: pointer to string being modified
 * @b: const char 
 * @n: number of characters being set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	len = strlen(s);

	for (n = 0; n < len; len++)
	{
	s[n] = b;
	}
	return (s);
}
