#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: Always (success)
 */
void times_table(void)
{
	
int n, b, c;

n = 0;
b = 0;

for (n = 0; n <= 9; n++)
{
for (b = 0; b <= 9; b++)
{
c = b *n;

if (b == 0)
_putchar(c + '0');

if (c < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(k + '0');
}
else if (c >= 10)
{
_putchar(',');	
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
