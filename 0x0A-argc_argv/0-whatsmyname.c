#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program to prints its name
 * @argc: CLI argument count
 * @argv[]: CLI argument array
 * Return: 0 is success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
