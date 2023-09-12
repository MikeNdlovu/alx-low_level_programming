#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r, g;

r = 'a';
g = 'A';

for (r = 'a'; r <= 'z'; r++)
{
for (g = 'A'; g <= 'Z'; g++)
{
if (r <= 'z')
{
return (1);
}
else if (g <= 'Z')
{
return (0);
}
}
}
_putchar('\n');
}
