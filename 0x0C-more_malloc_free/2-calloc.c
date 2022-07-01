#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * _calloc - allocates to n elements size bytes
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: returns a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
