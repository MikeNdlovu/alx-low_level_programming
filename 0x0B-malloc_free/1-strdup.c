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
	int len;

	len = strlen(str);
	str = malloc(len * sizeof(char));

	str = strdup(str);

	return (str);
}
