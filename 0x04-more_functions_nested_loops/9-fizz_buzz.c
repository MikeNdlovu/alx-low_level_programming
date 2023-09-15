#include <stdio.h>

/** 
 * main - FizzBuzz
 * Return: zero
 */

int main(void)
{
	int a;

	a = 1;

	for (a = 1; a <= 100; a++)
	{
	if (a % 15 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz ");
	}
	else if (a % 3 == 0)
	{
	printf("Fizz ");
	}
	else
	{
	printf("%d ", a);
	}
	}
	putchar('\n');
}
