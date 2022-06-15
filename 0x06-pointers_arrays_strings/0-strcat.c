#include <stdio.h>
#include <string.h>
#include <main.h>
/**
 * *_strcat - function to concatenate strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
