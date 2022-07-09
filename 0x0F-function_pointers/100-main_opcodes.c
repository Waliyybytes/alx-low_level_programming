#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - prints the opcodes of its own main function
 * @argc: int
 * @argv: char pointer of pointer
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	int n, i = 0;
	int (*ptr_main)(int, char **);

	ptr_main = main;
	unsigned char op_codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n)
	{
		op_codes = *(unsigned char *)ptr_main;
		printf("%.2x", op_codes);
		if (i < (n - 1))
		{
			printf(" ");
		}
		ptr_main++;
		i++;
	}

	printf("\n");

	return (0);
}

