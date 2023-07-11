#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees up a grid
 * @grid: Grid to free
 * @height: Height of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 *              It iterates through each row and frees the memory for each row
 *              before freeing the memory for the grid itself.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}