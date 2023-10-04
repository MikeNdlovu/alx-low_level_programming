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

	len = strlen(s1);
	len2 = strlen(s2);
	s1 = malloc(len * sizeof(char));
	s2 = malloc((len2 * sizeof(char)) + 1);

	strcat(s1, s2);
	return (s1);
}
