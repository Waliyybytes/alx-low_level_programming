#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- this is a function to print furst 50 fibonacci numbers
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long next = a + b;
	int i;

	printf("%ld, %ld, %ld, ", a, b, next);
	for (i = 4; i <= 50; i++)
	{
		a = b;
		b = next;
		next = a + b;
		if (i < 50)
			printf("%ld, ", next);
		if (i == 50)
			printf("%ld\n", next);
	}
	return (0);
}
