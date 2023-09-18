#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string being printed in reverse
 * Return: 0always
 */
void print_rev(char *s)
{
int f = 0;

while (s[f] != 0 && f >= 0)
{
f++;
}
for (f -= 1; f >= 0; f--)
{
_putchar(s[f]);
}
_putchar('\n');
}
