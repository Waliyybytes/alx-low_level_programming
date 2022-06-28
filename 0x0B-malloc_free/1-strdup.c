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
		copy = (char *)malloc(strlen(str) * sizeof(char));
		if (copy == NULL)
			return (NULL);
		copy = strdup(str);
	}
	else
		return (NULL);

	return (copy);
}


