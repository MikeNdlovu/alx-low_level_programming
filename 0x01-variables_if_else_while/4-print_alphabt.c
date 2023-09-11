#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alpha(z) where z != q & e
 *
 * Return: Always (SUCCESS)
*/
int main(void)
{

char n;
char m;
char z;

m = 'e';
n = 'q';
z = 'a';

for (z = 'a'; z <= 'z'; z++)
{
if (z != m && z != n)
{
putchar(z);
}
putchar('\n');
return (0);
}
}
