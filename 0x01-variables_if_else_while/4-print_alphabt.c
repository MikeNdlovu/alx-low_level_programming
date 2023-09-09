#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
*main - Classifies neg, pos & zero 
*Return: Always (success)
*/
int main(void)
{

char n;
char m;
char z;

z = 'a';
m = 'q';
n = 'e';

for (z = 'a'; z <= 'z'; z++)
{
if (z != m && z != n)
putchar(z);
}

putchar('\n');
return (0);
}

