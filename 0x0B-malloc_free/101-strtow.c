#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - ...
 * @str: ...
 * Return: hjg
 */
char **strtow(char *str)
{
	char **g;
	int m = 0;

	while (str[m])
	{
		m++;
	}

	g = malloc(sizeof(char *) * m);

	g = &str;
	**g = str[m];

	return (g);
}
