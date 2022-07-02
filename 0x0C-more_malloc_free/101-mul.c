#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * main - program to prints arguments
 * @argc: CLI argument count
 * @argv: CLI argument array
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	size_t i;

	for (i = 0; i < strlen(argv[1]) || i < strlen(argv[2]); i++)
	{
		if (!isdigit(argv[1][i]) || !isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{	printf("Error\n");
		exit(98);
	}
}
