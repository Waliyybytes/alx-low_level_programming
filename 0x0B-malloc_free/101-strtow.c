#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * strtow - split a strings to words
 * @str: array of args
 *
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	int i, j, k, len;
	char **ptr;
	int l_idx = 0, c_idx = 0;

	if (*str == '' || str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (*(str + i) == ' ')
			len++;
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (len + 2));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (*(str + i) == ' ')
		{
			c_idx = i;
			ptr[j] = (char *)malloc(sizeof(char) * (c_idx - l_idx + 1));
			l_idx = c_idx + 1;
			j++;
		}
		i++;
	}
	k = 0;
	while (str[k])
	{
		for (i = 0; ptr; i++)
		{
			for (j = 0; ptr[i]; j++)
			{
				if (*(str + k) != ' ')
					ptr[i][j] = str[k];
				else
					ptr[i][j] = '\0';
				k++;
			}
		}
	}
	return (ptr);
}
