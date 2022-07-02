#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _realloc - allocates to n elements size bytes
 * @ptr: pointer to old array
 * @old_size: size of old array
 * @new_size: size of new array
 * Return: returns a pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size && new_size != 0)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);

}
