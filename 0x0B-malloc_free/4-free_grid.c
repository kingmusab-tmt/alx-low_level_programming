#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 Dimentional grid
 * previously created by alloc_grid
 * @grid: pointer to grid to be free
 * @height: height of grid
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
