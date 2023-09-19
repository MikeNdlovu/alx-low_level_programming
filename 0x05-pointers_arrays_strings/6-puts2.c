#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - puts every other number of a functioin
 * @str: string being manipulated
 * Return: Always Success
 */
void puts2(char *str)
{
int g, f;

g = 0;
f = 1;

for (g != f; g < f; g++)
{
for (f = 1; f >= g; f += 2)
{
str[f];
_putchar(str[g]);
}
}
_putchar('\n');
}
