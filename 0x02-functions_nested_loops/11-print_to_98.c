#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98- this is a function to check lower case
 *
 * @n: character to be checked
 * Return: 0 is success
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
	}
	else
		printf("%d\n", n);
}
