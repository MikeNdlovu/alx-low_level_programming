#include "main.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - returns x to the power y
 * @x: the base value of the funtion
 * @y: the power to be raised by
 * Return: Success
 */
int _pow_recursion(int x, int y)
{
	int m = 0;

	m++;
	if (m < y)
	{
		x = x * x;
	}
	return (x);
}
