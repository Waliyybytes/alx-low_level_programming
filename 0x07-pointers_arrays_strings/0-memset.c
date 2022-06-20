#include <string.h>
#include "main.h"

/**
 * *_memset - prints buffer in hexa
 *
 * @s: address of memory to print
 * @b: character to replace
 * @n: first n bytes fill up
 *
 * Return: returns a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	memset(s, b, n*sizeof(char));
	return p;
}

