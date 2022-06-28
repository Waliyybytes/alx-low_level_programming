#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - to contenate a string dynamically
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or a pointer to the new string formed
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	size_t i, j, k;

	join = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (join == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		join[i] = s1[i];
	j = i;

	while (s2[k])
	{
		join[j] = s2[k];
		k++;
		j++;
	}
	return (join);
}


