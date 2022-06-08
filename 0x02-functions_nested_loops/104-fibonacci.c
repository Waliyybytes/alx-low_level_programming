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
	uintmax_t a = 1;
	uintmax_t b = 2;
	uintmax_t next = a + b;
	int i;

	printf("%llu, %llu, %llu, ", a, b, next);
	for (i = 4; i <= 98; i++)
	{
		a = b;
		b = next;
		next = a + b;
		if (i < 98)
			printf("%llu, ", next);
		if (i == 98)
			printf("%llu\n", next);
	}
	return (0);
}
