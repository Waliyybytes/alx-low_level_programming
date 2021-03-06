#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - to duplicate a string
 * @str: string duplicated
 * Return: NULL or a pointer to the array
 */

char *_strdup(char *str)
{
	char *copy;

	if (str != NULL)
	{
		copy = (char *)malloc(sizeof(str) - (2 * sizeof('\0')));
		if (copy == NULL)
			return (NULL);
		copy = strdup(str);
	}
	else
		return (NULL);

	return (copy);
}


