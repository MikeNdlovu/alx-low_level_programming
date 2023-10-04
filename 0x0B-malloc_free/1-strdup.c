#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem,
 * @str: string being checked
 * Return: success
 */
char *_strdup(char *str)
{
	int i = 0, n = 1;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n])
	{
		n++;
	}

	st = malloc((n * sizeof(char)) + 1);

	if (st == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		st[i] = str[i];
		i++;
	}

	st[i] = '\0';
	return (st);
}
