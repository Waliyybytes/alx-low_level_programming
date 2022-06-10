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
	int i;
	int prime;
	long long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			prime = i;
			n = n / i;
		}
	}
	printf("%d\n", prime);
	return (0);
}
