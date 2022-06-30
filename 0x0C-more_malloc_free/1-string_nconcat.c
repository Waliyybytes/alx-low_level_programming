#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates n characters
 * @s1: destination string
 * @s2: source string
 * @n: number of s2 charcters
 * Return: returns a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int a = strlen(s1);
	int i = 0, j = 0;

	if (n >= strlen(s2))
	{
		n = sizeof(s2);
		ptr = malloc(strlen(s1) + n);
	}
	else
		n++;
		ptr = malloc(strlen(s1) + n);

	for (i = 0; i < a; i++)
		ptr[i] = s1[i];
	for (i = a; i < a + n; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[a + n] = '\0';
	return (ptr);
}
