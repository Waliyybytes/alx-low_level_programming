#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * fix_string - to fix charcaters
 * @str: given string
 * @ptr: beded
 * Return: ptr
 */
char **fix_string(char *str, char **ptr)
{
	char **ptrs = malloc(sizeof(ptr));
	int i = 0, j = 0, k = 0;

	while (str[k])
	{
		for (i = 0; ptrs; i++)
		{
			for (j = 0; ptrs[i]; j++)
			{
				if (str[k] != ' ')
					ptrs[i][j] = str[k];
				else
					break;
			}
		}
		i++;
	}
	return (ptrs);
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
	int c_idx = 0;

	if (str == NULL || *str == ' ')
		return (NULL);
	while (str[i])
	{
		if (str[i + 1] == ' ')
			len++;
		i++;
	}
	ptr = (char **)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		if (isalnum(str))
			c_idx++;
		if (str[i + 1] == ' ')
		{
			ptr[j] = (char *)malloc(sizeof(char *) * c_idx);
			c_idx = 0;
			j++;
		}
		i++;
	}
	ptr = fix_string(str, ptr);
	return (ptr);
}
