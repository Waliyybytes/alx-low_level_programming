#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -calls a function to check if prime
 * @n: number n
 * Return: a call to another function
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (check_prime(2, n));
}

/**
 * check_prime - check if number n is prime
 * @a: guessed divisor
 * @n: number given
 * Return: a 0 or 1 if not prime or prime
 */

int check_prime(int a, int n)
{
	if (n % a == 0 && a != n)
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return (check_prime(a + 1, n));
}
