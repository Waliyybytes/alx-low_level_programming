#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- this is a function to print furst 100 fibonacci numbers
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	long a = 1;
	long b = 2;
	unsigned long long next = a + b;
	int i;

	printf("%ld, %ld, %llu, ", a, b, next);
	for (i = 4; i <= 100; i++)
	{
		a = b;
		b = next;
		next = a + b;
		if (i < 100)
			printf("%llu, ", next);
		if (i == 100)
			printf("%llu\n", next);
	}
	return (0);
}
