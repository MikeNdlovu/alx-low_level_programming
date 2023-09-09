#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing reverse alpha
 *
 * Return: Always (success)
*/
int main(void)
{  

char p;

for (p = 'z'; p >= 'a'; p--)
{
putchar(p);
}

putchar('\n');
return (0);
}
