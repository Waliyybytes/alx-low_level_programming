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
	if (b  >= INT_MAX)
		exit(98);
	return (malloc(b));
}
