#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- sum of even fibonacci numbers less than 4000000
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long next = a + b;
	long sum = 2;

	while (next < 4000000)
	{
		a = b;
		b = next;
		next = a + b;
		if (next % 2 == 0)
			sum += next;
	}

	printf("%ld\n", sum);
	return (0);
}
