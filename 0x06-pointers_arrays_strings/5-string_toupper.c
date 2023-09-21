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
	char replcae, new;
	int len;
	int n;

	len = strlen(str);

	for (n = 0; n < len; n++)
	{
	for (replace = 'a'; replace <= 'z'; replace++)
	{
	for (new = 'A'; new <= 'Z'; new++)
	{
	if (str[n] == replace)
	{
	str[n] = new;
	}
	}
	}
	}
/**	while (str[n] != '\0')
	{
	if (str[n] >= 'a' && str[n] <= 'z')
	{
		str[n] -= 32;
		n++;
	}
	}*/
	return (str);
}
