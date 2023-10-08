#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - pputs range of array
 * @min: minimun int value
 * @max: maximum int value
 * Return: success
 */
int *array_range(int min, int max)
{
	int *mk, e = 0;

	if (min > max)
		return (NULL);

	mk = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (mk == NULL)
		return (NULL);

	while (min <= max)
	{
		mk[e] = min;
		e++;
		min++;
	}

	return (mk);
}
