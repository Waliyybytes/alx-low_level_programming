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
	int i = 0;
	int a = max - min + 2;

	if (min > max)
		return (NULL);
	ptr = (int *) calloc(a - 1, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a - 1; i++)
	{
		ptr[i] = min;
		min++;
	}
	ptr[a - 1] = '\0';
	return (ptr);
}
