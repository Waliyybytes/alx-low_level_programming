#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform some operation
 * @argc: count of argv
 * @argv: CLI arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int (*fpt)(int, int);
	
	fpt = get_op_func(argv[2]);

	if (fpt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc == 4)
		printf("%d\n", (*fpt)(atoi(argv[1]), atoi(argv[3])));
	else
	{
		printf("Error\n");
		exit(98);
	}


	return (0);
}
