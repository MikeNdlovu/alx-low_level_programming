#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - two dimensional array of intergers
 * @height: height of the array
 *@width: width of the array
 *Return: SUCCESS
*/
int **alloc_grid(int width, int height)
{
	int h, k, l, m;
	int **b;

	if (width <= 0 || height <= 0)
	return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		b[h] = malloc(sizeof(int) * width);

		if (a[h] == NULL)
		{
			for (k = h; k >= 0; k--)
			{
				free(a);
				return (NULL);
			}
		}
	}

	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
		{
			a[l][m] = 0;
		}
	}

	return (b);
}
