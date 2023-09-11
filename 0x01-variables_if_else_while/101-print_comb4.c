#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - all possible outcome of three digits
 *
 * Return: Zero (Success)
*/
int main(void)
{

int a;
int b;
int c;

for (a = '0'; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
for (c = b + 1; c <= '9'; c++)
{
if (a != b && b != c)
{
putchar(a);
putchar(b);
putchar(c);
}
if (a > '6')
continue;
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
