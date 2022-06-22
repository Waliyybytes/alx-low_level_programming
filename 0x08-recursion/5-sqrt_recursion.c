#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -calls a function to compute square root
 * @n: number n
 * Return: a call to another function
 */

int _sqrt_recursion(int n)
{
	return (check_sqrt(1, n));
}

/**
 * check_sqrt - computes square root of natural number n recursively
 * @a: guessed number
 * @n: number given
 * Return: a number or -1 if no natural number as square root
 */

int check_sqrt(int a, int n)
{
	if (a * a == n)
		return (a);
	else if (a > n / 2)
		return (-1);
	else
		return (check_sqrt(a + 1, n));
}
