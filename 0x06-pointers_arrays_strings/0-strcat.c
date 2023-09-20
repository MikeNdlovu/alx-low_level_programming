#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: concatenated into(extracted from)
 * @src: concatenated from
 * Return: Always Success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
