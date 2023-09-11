#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print all possible four digit code
 *
 * Return: Always (0)
*/
int main(void)
{

int p;
int l;
int k;
int m;

for (p = '0'; p <= '9'; p++)
{
for (l = '0'; l <= '9'; l++)
{
for (k = p; k <= '9'; k++)
{
for (m = '0'; m <= '9'; m++)
{
{
if (m != l)
putchar(p);
putchar(l);
putchar(' ');
putchar(k);
putchar(m);
}
if (p == '9' && l == '8')
continue;
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
