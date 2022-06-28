#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - to craete an array
 * @size: size of array to create
 * @c: character to fill in
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			array[i] = c;
	}
	else
		return (NULL);

	return (array);
}


