#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program to prints its name
 * @argc: CLI argument count
 * @arg[]: CLI argument array
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
}
