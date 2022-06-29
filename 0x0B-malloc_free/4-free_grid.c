#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * free_grid - to creat two dimensional array
 * @grid: grid 2-D array
 * @height: array height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}	


