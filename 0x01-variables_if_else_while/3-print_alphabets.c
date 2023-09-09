#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
*main - Classifies neg, pos & zero 
*Return: Always (success)
*/
int main(void)

{

char n;

for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}

for (n = 'A'; n <= 'Z'; n++)
{
putchar(n);
}

putchar('\n');
return (0);
}
