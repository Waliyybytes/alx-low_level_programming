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
	int i, j;
	int **mesh;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int **)malloc(height * sizeof(int *));
	if (mesh == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		mesh[i] = (int *)malloc(width * sizeof(int));
	if (mesh[i] == NULL)
	{
		for (i = 0; i < height; i++)
			free(mesh[i]);
		free(mesh);
		return (NULL);
	}
	i = 0;
	while (mesh[height])
	{
		j = 0;
		while (mesh[i][width])
		{
			mesh[i][j] = 0;
			j++;
		}
		i++;
	}
		return (mesh);
}


