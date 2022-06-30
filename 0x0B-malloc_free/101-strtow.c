#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * strtow - split a strings to words
 * @str: array of args
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	int i = 0, len = 0, k = 0, j = 0, l = 0, c_idx = 0;
	char **ptr;
	size_t size = 0;

	while (str[i])
	{
		if (str[i + 1] == ' ' && isgraph(str[i - 1]) || isgraph(str[i + 1]))
			len++;
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (len + 2));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < len + 1; k++)
	{
		while (size < strlen(str))
		{
			if (isgraph(str[i]))
				c_idx++;
			if (str[i] == ' ')
			{
				ptr[k] = (char *)malloc(sizeof(char) * c_idx);
				j = 0;
				for (l = i - c_idx; l < i; l++)
				{
					ptr[k][j] = str[l];
					j++;
				}
				ptr[k][c_idx] = '\0';
				c_idx = 0;
				i++;
				break;
			}
			i++, size++;
		}
	}
	ptr[len + 2] = NULL;
	return (ptr);
}
