#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program to prints arguments
 * @argc: CLI argument count
 * @argv: CLI argument array
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{	printf("Error\n");
		return (1);
	}
}
