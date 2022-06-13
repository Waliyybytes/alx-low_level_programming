#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * print_array - prints n elements of an array
 *
 * @a: array to be printed
 * @n: number of elements in array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
