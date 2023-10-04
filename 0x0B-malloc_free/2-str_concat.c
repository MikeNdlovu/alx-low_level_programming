#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - mixes s1 and s2
 * @s1: original string
 * @s2: string to be added on
 * Return: SUCCESS
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, k = 0, l = 0;
	char *st;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[i])
	{
		i++;
	}

	while (s2[n])
	{
		n++;
	}

	l = n + i;
	st = malloc((sizeof(char) * l) + 1);

	if (st == NULL)
	return (NULL);

	return (st);
}
