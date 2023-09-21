#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string being compared
 * @s2: string being compared
 * Return: Success
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	m = strcmp(s1, s2);
	if (m < 0)
	{
		return (-15);
	}
	else if (m > 0)
	{
		return (15);
	}
	else
	return (0);
}
