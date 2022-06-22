#include "main.h"
#include <stdio.h>

/**
 * factorial -computes the factorial of a number
 *
 * @n: number
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1)

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));

}

