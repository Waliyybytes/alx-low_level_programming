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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	join = (char *)malloc(sizeof(s1) + sizeof(s2) - sizeof('\0'));
	if (join == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		join[i] = s1[i];
	j = strlen(s1);

	k = 0;
	while (s2[k])
	{
		join[j] = s2[k];
		k++;
		j++;
	}
	return (join);
}


