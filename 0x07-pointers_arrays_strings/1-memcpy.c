#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memcpy - function that copies information of n bytes
 * @src: bytes to be copied are extracted from here
 * @dest: bytes are copied to here
 * @n: number of bytes to be copied
 * Return: Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lim;
	unsigned int len;

	len = strlen(dest);

	for (lim = 0; lim < len; lim++)
	{
		dest[lim] = dest[lim];
	}
	for (lim = 0; lim < n; lim++)
	{
		dest[lim] = src[lim];
	}
	return (dest);
}
