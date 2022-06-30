#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b:memory space needed
 * Return: returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
}
