#include "main"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - concatenates two strings
 * @dest: string added onto
 * @src:string taken from
 * @n: number of of chars to take from src
 * Return: Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int k;

	m = 0;
	while (dest[m] != '\0')
	{
	m++;
	}

	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[m] = src[k];
	m++;
	k++;
	}

	dest[m] = '\0';
	return (dest);
}
