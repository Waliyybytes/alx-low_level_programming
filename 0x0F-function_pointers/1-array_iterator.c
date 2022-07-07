#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array to ac on
 * @size: size of array
 * @action: function pointer to execute
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (f == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
