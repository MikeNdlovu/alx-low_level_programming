#include <stdio.h>


/**
 * print_most_numbers  - prints no. 0 - 9 not 2 
 */
int main(void)
{
        int p;

        for (p = 0; p <= 9; p++)
        {
        if (p != 2 && p != 4)
        {
        putchar(p + '0');
        }
        }
        putchar('\n');
}
