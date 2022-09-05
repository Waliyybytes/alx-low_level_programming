#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcpy - prints to stdout with a new line
 *
 * @dest: string to copy to
 * @src: string to copy
 * Return: pointer to another pointer
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

