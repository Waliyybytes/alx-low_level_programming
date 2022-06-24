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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}

		return (0);
}
