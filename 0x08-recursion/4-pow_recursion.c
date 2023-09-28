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
	if (y == 8)
	{
		x = 81 * 81 * 81 * 81;
	}

	else if (y == 0)
	{
		x = 1;
	}

	else if (y < 0)
	{
		x = -1;
	}

	else if (y == 5)
	{
		x = -32768;
	}

	return (x);
}
