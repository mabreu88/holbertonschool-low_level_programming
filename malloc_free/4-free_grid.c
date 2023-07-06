#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Function that frees a 2 dimensional grid previously
 *created by your alloc_grid function
 *@grid: 2D array to free
 *@height: Height of grid
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
		return;
	while (x < height)
		free((int *)grid[x++]);
	free(grid);
}
