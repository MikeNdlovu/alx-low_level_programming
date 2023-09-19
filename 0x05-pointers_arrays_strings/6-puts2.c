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

f = 0;
g = f++;

while (str[f] != '\0')
{
g++;
f++;
}

if (str[g] < 1)
{
_putchar('\n');
}

else
for (g = 0; g < f; g += 2)
{
_putchar(str[g]);
}
_putchar('\n');
}
