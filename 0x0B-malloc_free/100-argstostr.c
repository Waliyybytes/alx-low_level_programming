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
	int len;
	int count = 0;
	char *fail = "Failed";

	i = 0;
	len = 0;
	if (ac == 0 && av == NULL)
		return (fail);
	while (av[i])
	{
		len = len + strlen(av[i]);
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + ac + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ptr[count] = av[i][j];
			count++;
		}
		ptr[count] = '\n';
		count++;
	}
	return (ptr);
}
