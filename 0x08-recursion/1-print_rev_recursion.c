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
	int len = strlen(s);
	int i = 0;
	int middle = len / 2;
	char c;

	if (i < middle)
	{
		c = s[i];
		s[i] = s[len - i - 1 ];
		s[len - i - 1] = c;

		return _print_rev_recursion(s + i + 1);
	}
}
