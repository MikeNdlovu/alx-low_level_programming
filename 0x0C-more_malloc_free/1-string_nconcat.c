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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *sub;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	sub = malloc(sizeof(char) * l + 1);

	if (sub == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			sub[j] = s1[j];

		if (j >= i)
		{
			sub[j] = s2[k];
			k++;
		}
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
