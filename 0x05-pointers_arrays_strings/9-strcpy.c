#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copies atring to dest
 * @dest: the pointer copies to...
 * @src: the pointer that is copied from
 * Return: Success
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
