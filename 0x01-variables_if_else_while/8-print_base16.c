#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print 1-9 and a-f
 *
 * Return: 0 (success)
*/
int main(void)
{

int a;
char J;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}

for (J = 'a'; J <= 'f'; J++)
{
putchar(J);
}

putchar('\n');
return (0);
}
