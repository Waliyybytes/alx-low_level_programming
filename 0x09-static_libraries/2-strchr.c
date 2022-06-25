#include <string.h>
#include "main.h"

/**
 * *_strchr - locates a chracter in a string
 *
 * @s: address of memory to print
 * @c: character to to find
 *
 * Return: returns a pointer to s
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

