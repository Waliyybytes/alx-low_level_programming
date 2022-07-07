#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - executes a function
 * @array: array to action on
 * @size: size of array
 * @cmp: function pointer to execute
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			break;
		if (i + 1 == size)
			return (-1);
	}

	return (i);
}
