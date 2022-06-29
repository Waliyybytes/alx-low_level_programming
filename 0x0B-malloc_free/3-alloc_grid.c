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
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int *)malloc(sizeof(height * width));
	if (mesh == NULL)
		return (NULL);
	while (mesh)
	{
		for (h = 0; grid[height]; h++)
		{
			for (w = 0; grid[h][width]; w++)
				grid[h][w] = 0;
		}
	}
		return (grid);
}


