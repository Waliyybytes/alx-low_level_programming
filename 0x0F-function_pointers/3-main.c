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

	if (argc == 4)
		printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	else
	{
		printf("Error\n");
		exit(98);
	}


	return (0);
}
