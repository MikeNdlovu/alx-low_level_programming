#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_toupper - changes lower case char to upper
 * @str: string being replaced
 * Return: SUCCESS
 */
char *string_toupper(char *str)
{
	int n, len;

	len = strlen(str);

	for (n = 0; n < len; n++)
	{
	str[n] = toupper(str[n]);
	}
	return (str);
}
