#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print zero - nine
 *
 *Return: Always (SUCCESS)
*/
int main(void)
{

int w;

for (w = '0'; w <= '9'; w++)
{
putchar(w);
}

putchar('\n');
return (0);
}
