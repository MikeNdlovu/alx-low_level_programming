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
	gets(s);

	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		s[i] = s[i];
	}
}
