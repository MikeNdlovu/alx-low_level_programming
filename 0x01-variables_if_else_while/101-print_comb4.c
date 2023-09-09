#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
*main - Classifies neg, pos & zero 
*Return: Always (success)
*/
int main(void)
{

int d, l, p;

for (d = '0'; d < '9'; d++)
{
for (l = d + 1; l <= 9; l++)
{
for (p = l + 1; l <= '9'; p++)
{
if ((l != d) != p)
{
putchar(d);
putchar(l);
putchar(p);
if (d == '7' && l == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
