#include <stdio.h>
#include "main.h"

/**
 */
void bi(unsigned long int n)
{

        if (n == 0)
       return;

        bi(n >> 1);
        if ((n & 1) == 1)
        putchar('1');
        if ((n & 1) == 0)
        putchar('0');
}
void print_binary(unsigned long int n)
{
	if (n == 0)
	putchar('0');

	else
	{
		bi(n);
	}
}
