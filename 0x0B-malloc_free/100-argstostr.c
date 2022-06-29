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
	char *ptr;
	int len = 0;
	int count = 0;

	i = 0;
	while (av[i])
	{
		len = len + strlen(av[i]);
	}

	ptr = (char *)malloc(sizeof(char) * (len + ac - 1));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i]; j++)
		{	
			ptr[count] = av[i][j];
			count++;
		}
		ptr[count] = '\n';
		count++;

	}

	return (ptr);
}
