#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - prints the length of a string
 * @s: string length being printed
 * Return: 0always
 */

int _strlen(char *s)
{
char length;
char d;

d = *s;
length = strlen(d);
printf("%d\n", length);

return (0);
}
