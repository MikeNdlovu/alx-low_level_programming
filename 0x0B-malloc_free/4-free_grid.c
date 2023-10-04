#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created by alloc_grid function
 * @grid: pointer to pointer
 * @height: height of the grid
 * Return: success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
