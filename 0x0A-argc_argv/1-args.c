#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program to prints its name
 * @argc: CLI argument count
 * @argv: CLI argument array
 * Return: 0 is success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
