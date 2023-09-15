#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of square
 * Return: zero
 */
int main(int size)
{
        int a, b;
	size = 5;

        a = b = 1;

        if (size < 1)
        {
        putchar('\n');
        }

        else
	{
        for (a = 1; a <= size; a++)
        {
        for (b = 1; b <= size; b++)
        {
        putchar(35);
        }
        putchar('\n');
        }
	}
}
