#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - different number combinations
*
* Return: 0 (SUCCESS)
*/ 
int main(void)
{       
        
int a;
int b;

for (a = '0'; a <= '8' ; a++)
{       
for (b = a + 1; b <= '9'; b++)
{
if (b != a)
putchar(a);
putchar(b);
if (a == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
