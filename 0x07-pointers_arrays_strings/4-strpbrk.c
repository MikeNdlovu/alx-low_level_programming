#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: unction locates the first occurrence in the string s
 * @accept: takes any of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	k = strpbrk(s, accept);

	return (k);
}
