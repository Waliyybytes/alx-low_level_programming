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
	int *mesh, **grid;
	int i, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int *)malloc(sizeof(width * height));
	if (mesh == NULL)
		return (NULL);
	i = 0;
	while (mesh[i])
	{
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
				grid[h][w] = 0;
		}
		i++;
	}
	return (grid);
}


