#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strchr - locates char in string
 * @s: pointer pointing to what has to change
 * @c: at occurance of char c start
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char **occur;

	occur = &s;
	*occur = strchr(s, c);
	return (s);
}
