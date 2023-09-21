#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - replaces charecters of a string
 * @str: used to point to which string should be removed
 * Return: SUCCESS
 */
char *leet(char *str)
{
	int n;
	int len;

	len = strlen(str);
	for (n = 0; n < len; n++)
	{
	if (str[n] == 'a' || str[n] == 'A')
	{
	str[n] = '4';
	}
	else if (str[n] == 'e' || str[n] == 'E')
	{
	str[n] = '3';
	}
	else if (str[n] == 'o' || str[n] == 'O')
	{
	str[n] = '0';
	}
	else if (str[n] == 't' || str[n] == 'T')
	{
	str[n] = '7';
	}
	else if (str[n] == 'l' || str[n] == 'L')
	{
	str[n] = '1';
	}
	else
	{
	str[n] = str[n];
	}
	}
	return (str);
}
