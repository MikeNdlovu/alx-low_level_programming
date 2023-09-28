#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 * Return: Success
 */
void _print_rev_recursion(char *s)
{
	int n;
	int len;

	len = strlen(s);

	for (n = 0; n < len; n++)
	{
		s[n] = strrev(s);
	}
}
