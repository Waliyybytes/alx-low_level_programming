#include <string.h>
#include "main.h"

/**
 * *_memcpy - copies from one memory area to another
 *
 * @src: src area to copy from
 * @dest: destination to copy to
 * @n: n characters to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

