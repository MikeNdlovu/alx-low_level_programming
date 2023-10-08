#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - contacenates two strings
 * @s1: unchanged string
 * @s2: string being conc
 * @n: number of items being taken from s2
 * Return: success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, incr, incr2;
	char *sub;

	len1 = strlen(s1);
	sub = malloc((len1 + n + 1) * sizeof(unsigned int));
	s1 = malloc(len1 * sizeof(unsigned int));
	s2 = malloc(n * sizeof(unsigned int));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (incr = 0; incr < len1 + n; incr++)
	{
		if (incr < len1)
		{
		sub[incr] = s1[incr];
		}

	for (incr2 = 0; incr2 < n; incr2++)
	{
		sub[incr] = s2[incr2];
	}

	}

	return (sub);
}
