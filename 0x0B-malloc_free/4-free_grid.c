#include "main.h"
/**
 * free_grid - Freeing 2-Dimensional Array Dinamically Allocated
 * @grid: 2-Dimensional Array
 * @height: height of the 2-D Array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
