#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print rev alpha
 *
 *Return: Always (SUCCESS)
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
