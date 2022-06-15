#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - function to concatenate strings with at most n bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use
 * Return: returns a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strcat(dest, src, n));
}
