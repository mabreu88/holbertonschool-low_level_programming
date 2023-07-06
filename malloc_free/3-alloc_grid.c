#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - Function that returns a pointer to a 2
 *dimensional array of integers.
 *@width: Width
 *@height: Height
 *Return: Pointer to 2D array, Null on failure
 */
int **alloc_grid(int width, int height)
{
	int **matrix, x = 0, y = 0;

		if (width <= 0 || height <= 0)
			return (NULL);
		matrix = (int **)malloc(sizeof(int *) * height);
		if (matrix == NULL)
			return (NULL);
	for (x = 0; x < height; x++)
	{
		matrix[x] = (int *)malloc(sizeof(int) * width);
		if (matrix[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(matrix[y]);
			}
			free(matrix);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			matrix[x][y] = 0;
		}
	}
	return (matrix);
}
