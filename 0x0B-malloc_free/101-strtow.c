#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * fix_string - to fix charcaters
 * @str: given string
 * Return: ptr
 */
char **fix_string(char *str)
{
	char **ptr;
	int i = 0, j = 0, k = 0;

	while (str[k])
	{
		for (i = 0; ptr; i++)
		{
			for (j = 0; ptr[i]; j++)
			{
				if (str[k] != ' ')
					ptr[i][j] = str[k];
				else
					break;
			}
		}
		i++;
	}
	return (ptr);
}
/**
 * strtow - split a strings to words
 * @str: array of args
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	int i = 0, j = 0, len = 0;
	char **ptr;
	int l_idx = 0, c_idx = 0;

	while (str[i])
	{
		if (str[i + 1] == ' ')
			len++;
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (len + 2));
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i + 1] == ' ')
		{
			c_idx = i + 1;
			ptr[j] = (char *)malloc(sizeof(char) * (c_idx - l_idx + 1));
			l_idx = c_idx + 1;
			j++;
		}
		i++;
	}
	ptr = fix_string(str);
	return (ptr);
}
