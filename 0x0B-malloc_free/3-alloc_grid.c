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
	int **grid = NULL;
	int w, h, i;
	int *mesh;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int *)malloc(sizeof(height * width));
	if (mesh == NULL)
		return (NULL);
	for (i = 0; i < height * width; i++)
		mesh[i] = 0;
	i = 0;
	while (mesh[i])
	{
		for (h = 0; grid[height]; h++)
		{
			for (w = 0; grid[h][width]; w++)
				grid[h][w] = mesh[i];
		}
		i++;
	}
		return (grid);
}


