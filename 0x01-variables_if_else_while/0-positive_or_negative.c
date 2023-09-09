#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* 
*main - Classifies neg, pos & zero 
*Return: Always (success)
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	
if (n > 0)
{
printf("%d is positve\n", n);
}

else if (n == 0)
{
printf("%d is zero\n", n);
}

else if (n < 0)
{
printf("%d is negative\n", n);
}

return (0);
}

