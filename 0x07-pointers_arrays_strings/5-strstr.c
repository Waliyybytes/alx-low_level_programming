#include <string.h>
#include "main.h"

/**
 * *_strstr - locates a needle in a haystack
 *
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: pointer to the beginning  of substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

