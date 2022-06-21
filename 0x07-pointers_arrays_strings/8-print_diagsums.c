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

	for (i = 0; i < (size * size); i += size + 1)
		l_sum += a[i];

	for (j = size - 1; j < (size * size) - 1; j += size - 1)
		r_sum += a[j];

	printf("%d, %d\n", l_sum, r_sum);

}
