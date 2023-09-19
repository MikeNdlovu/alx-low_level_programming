#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - puts every other number of a function
 * @str: string being manipulated
 * Return: Always Success
 */
void puts2(char *str)
{
int g, f;
char gt;

g = 0;
f = 1;
gt = str;

for (g = 0; g != f; g++)
{
for (f = 1; f >= g; f + 2)
{
str[g++];
str[g] = str[g - f - 2];
str[g] = gt;
gt = str[g - f - 2];
}
}
}
