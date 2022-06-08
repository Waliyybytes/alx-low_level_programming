#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- this is a function to print furst 98 fibonacci numbers
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next = a + b;
	int i;

	printf("%lu, %lu, %lu, ", a, b, next);
	for (i = 4; i <= 98; i++)
	{
		a = b;
		b = next;
		next = a + b;
		if (i < 98)
			printf("%lu, ", next);
		if (i == 98)
			printf("%lu\n", next);
	}
	return (0);
}
