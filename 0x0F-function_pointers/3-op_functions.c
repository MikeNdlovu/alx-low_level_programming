#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two ints
 * op_mul - multiplies two ints
 * op_div - divides two ints
 * op_sub - subtracts two ints
 * op_mod - brings remainder of two ints
 * @a: int 1
 * @b: int 2
 * Return: success
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 1)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

