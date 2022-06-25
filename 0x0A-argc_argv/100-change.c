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
	unsigned long long cents;
	int b[] = {1, 2, 5, 10, 25};
	int rem = 0;
	int quo = 0;
	int i = 0;
	int sum = 0;

	if (argc == 2)
	{
		cents = atoll(argv[1]);
		if (cents > 0)
		{
			while (i % 5 < 5)
			{
				if (cents < b[i])
				{
					quo = cents / b[i - 1];
					rem = cents % b[i - 1];
					cents = rem;
					i = 0;
					sum = sum + quo;
				}
				i++;
				if (quo > 0 && rem == 0)
				break;
			}
			printf("%d\n", sum);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
