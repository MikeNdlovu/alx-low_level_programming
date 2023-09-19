#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string being reversed
 * Return: 0always
 */

void rev_string(char *s)
{

int c, v;
char wtv;

c = 0;
v = 0;

while (s[c++])
{
	v++;
}

for (c = v -1; c >= v / 2; c--)
{
	wtv = s[c];
	s[c] = s[ v - c - 1];
	s[v - c - 1] = wtv;
}
}
