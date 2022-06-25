#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - program to ADD numbers
 * @argc: CLI argument count
 * @argv: CLI argument array
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int num = 0;
	size_t j = 0;

	while (i < argc)
	{
		num = 0;
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] - '0' >= 0  && argv[i][j] - '0' <= 9)
				num = num * 10 + argv[i][j] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
