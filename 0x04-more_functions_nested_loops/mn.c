#include <stdio.h>

/**
 * more_numbers - print no. 0 - 14 10x
 * Return: Success
 */
int main(void)
{
        int l;
        int m;

        l = 0;
        while (l < 10)
        {
        m = 0;

        while (m < 15)
        {
        if (m > 9)
        {
        putchar((m / 10) + '0');
        putchar((m % 10) + '0');
        }
        else
        {
        putchar(m + '0');
        }
        m++;
        }
        putchar('\n');
        l++;
        }
}
