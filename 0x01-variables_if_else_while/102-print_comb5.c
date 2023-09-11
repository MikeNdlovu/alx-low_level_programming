#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - all possible combinations of two digits
 *
 * Return: zero (success)
*/
int main(void)
{

int a;

a = 00;

for (a = 00; a <= 99; a++)
{
putchar(a);
putchar(' ');
}
putchar('\n');
return (0);
}
