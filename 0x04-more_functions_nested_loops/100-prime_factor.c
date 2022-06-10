#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main- to print largest prime factor
 *
 * Return: 0 is success
 */

int main(void)
{
	unsigned long i;
	unsigned long  prime;
	unsigned long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			prime = i;
			n = n / i;
		}
	}
	printf("%lu\n", prime);
	return (0);
}
