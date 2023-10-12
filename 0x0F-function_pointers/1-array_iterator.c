#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * void array_iterator - puts array parameters
 * @array:array to modified
 * @size: size of the array
 * @action: pointer to function
 * Return: success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int inc;

	if (array != NULL && action != NULL && size > 0)
	{
	for (inc = 0; inc < size; inc++)
	{
	action(array[inc]);
	}
	}
}

