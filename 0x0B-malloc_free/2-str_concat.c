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
	int len;
	int len2;
	int i = 0, n = 0;

	len = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	s1 = malloc(len * sizeof(char));
	s2 = malloc((len2 * sizeof(char)) + 1);

	while (i < len)
	{
		s1[i] = s1[i];
		i++;
	}

	while (n < len2)
	{
		s1[n] = s2[n];
		n++;
	}

	s1 = '\0';

	return (s1);
}
