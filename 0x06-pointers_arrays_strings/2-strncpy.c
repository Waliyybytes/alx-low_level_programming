#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncpy - function to copy strings with at most n bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use
 * Return: returns a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
