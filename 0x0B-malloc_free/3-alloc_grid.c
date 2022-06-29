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
	mesh = (int **)malloc(height * width *  sizeof(int *));
	if (mesh == NULL)
		return (NULL);
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


