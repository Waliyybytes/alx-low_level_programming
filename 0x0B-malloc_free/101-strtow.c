#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - split a strings to words
 * @str: array of args
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	int i = 0, k = 0, l = 0, c_idx = 0, len = 0, j = 0;
	char **ptr;
	size_t real_length = 0;

	while (str[i])
	{
		if (str[i] == ' ' && (isgraph(str[i + 1]) || isgraph(str[i - 1])))
			len++;
		i++;
	}
	ptr = (char **)malloc((len + 2) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	for (k = 0; k < len + 1 ; k++)
	{
		while (real_length < strlen(str))
		{
			if (isgraph(str[i]))
				c_idx++;
			if (str[i] == ' ' || str[i] == '\0')
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
			i++;
			real_length++;
		}
	}
	ptr[len + 2] = NULL;
	return (ptr);
}

