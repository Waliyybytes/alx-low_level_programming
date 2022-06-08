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
	long a = 0;
	long b = 1;
	long next = a + b;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 50; i++)
	{
		a = b;
		b = next;
		next = a + b;
		if (i < 49)
			printf("%ld, ", next);
		else
			printf("%ld\n", next);
	}
	return (0);
}
