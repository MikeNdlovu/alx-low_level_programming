#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - changes lower case char to upper
 * Return: SUCCESS
 */
char *string_toupper(char *str)
{
	int n = 0;
	while (str[n] != '\0')
	{
	if (str[n] >= 'a' && str[n] <= 'z')
	{
		str[n] -=32;
		n++;
	}
	}
	return (str);
}
