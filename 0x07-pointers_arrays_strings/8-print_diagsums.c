#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - to sum a diagonals of square matrix
 *
 * @a: an array of array
 * @size: size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int l_sum = 0;
	int r_sum = 0;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
		{	if (i == j)
				l_sum += a[i][j];
			if (i + j == size - 1)
				r_sum += a[i][j];
		}
		i++;
	}
	printf("%d, %d", l_sum, r_sum);

}

