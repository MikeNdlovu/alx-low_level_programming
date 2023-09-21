#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - changes lower case char to upper
 * Return: SUCCESS
 */
char *string_toupper(char *c)
{
	char b, *c;
	int n;

	for (b = A; b <= Z; b++)
	{
	for (n = 0; n <= '\0' ; n++)
	{
	while (c[n] != '\0')
	{
		c[n] = c[b];
		n++;
	}
	}
	}
}
