#include <string.h>
#include "main.h"

/**
 * *_strpbrk - matches initial substring with another string
 *
 * @s: string to scan
 * @accept: character to match
 *
 * Return: pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

