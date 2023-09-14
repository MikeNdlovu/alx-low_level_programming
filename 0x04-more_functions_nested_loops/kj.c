#include <stdio.h>

/**
 * print_line - draws a straight line in terminal
 * @n: number of lines to be drawn
 * Return: Always Success
 */
int main(void)
{
        int y;
	int n;
	int o;

	o = 0;

        y = '_';
	n = 40;


        if (n < 1)
        {
        putchar('\n');
        }
	else
        {
	for (o = 0; o < n; o++)
	{
        putchar(y);
        }
        putchar('\n');
}
}
