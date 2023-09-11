#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Classify numbers as (+, -, 0)
 *
 * Return: Always (SUCCESS)
*/
int main(void)
{

int n;
int lass;

srand(time(0));
n = rand() - RAND_MAX / 2;
lass = n % 10;

if (lass > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lass);
}

else if (lass == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lass);
}

else if (lass < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lass);
}

return (0);
}
