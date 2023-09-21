#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - concatenates two strings
 * @dest: main unchanged string
 * @src: information taken from src
 * @n: amount of chars taken from src
 * Return: Always Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;
	int g;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}

	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[b] = src[g];
		b++;
		g++;
	}
	dest[b] = '\0';
	return (dest);
}

