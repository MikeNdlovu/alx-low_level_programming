#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: array to be checked
 * @size: size of array
 * @cmp: pointer to function
 * Return: success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL && size > 0)
	{
	for (n = 0; n < size; n++)
	{
	if (cmp(array[n]))
	{
		return (n);
	}
	}
	}
	return (-1);
}
