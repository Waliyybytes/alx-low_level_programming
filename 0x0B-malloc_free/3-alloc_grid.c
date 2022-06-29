#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * alloc_grid - to creat two dimensional array
 * @width: array width
 * @height: array height
 * Return: NULL or a pointer to the new string formed
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	*grid = (int *)malloc(sizeof(height));
	**grid = (int *)malloc(sizeof(width));
	if (*grid == NULL || **grid == null)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}


