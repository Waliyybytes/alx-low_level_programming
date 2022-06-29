#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenate argv
 * @av: array of args
 * @ac: arg size
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i;
	size_t j;
	char **ptr;
	int count = 0;

	*ptr = (char *)malloc(sizeof(char *) * ac);
	while (ptr)
	{
		ptr = (char **)malloc(sizeof(char) * (strlen(av[i]) + ac - 1));
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ptr[i][j] = av[i][j];
			ptr[i][strlen(av[i])] = '\n';
		}
	}
	for (i = 0; ptr; i++)
	{
		for (j = 0; ptr[i]; j++)
		{
			count++;
		}
	}

	return (*ptr);
}
