#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b:memory space needed
 * Return: returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == INT_MAX)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
