#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -calls a function to compute square root
 * check_sqrt - computes square root of natural number n recursively
 * @n: number n
 * Return: power of number x to y
 */

int _sqrt_recursion(int n)
{
	return (check_sqrt(1, n));
}

int check_sqrt(int a, int n)
{
	if (a * a == n)
		return (a);
	else if (a > n / 2)
		return (-1);
	else
		return (check_sqrt(a + 1, n));
}
