#include <string.h>
#include "main.h"

/**
 * *_strspn - matches initial substring with another string
 *
 * @s: string to scan
 * @accept: character to match
 *
 * Return: length of matched segment
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

