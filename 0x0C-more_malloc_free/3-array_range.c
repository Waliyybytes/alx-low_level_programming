#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * array_range - creates an array of integers
 * @min: number of elements
 * @max: number of bytes
 * Return: returns a pointer or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);
	ptr = calloc(max - min + 2, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
	{
		ptr[j] = i;
		j++;
	}
	ptr[max - min + 2] = '\0';
	return (ptr);
}
