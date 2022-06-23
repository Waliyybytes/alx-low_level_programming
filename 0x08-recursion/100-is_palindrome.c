#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome -calls a function to compute square root
 * @s: string to chevk
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int n = strlen(s);

	return (check_palindrome(s, n - 1, 0));
}

/**
 * check_palindrome - computes square root of natural number n recursively
 * @s: guessed number
 * @n: number given
 * @k: index number
 * Return: a number or -1 if no natural number as square root
 */

int check_palindrome(char *s, int n, int k)
{

	if (s[k] != s[n - k])
		return (0);
	else if (k == n / 2)
		return (1);
	else
		return (check_palindrome(s, n, k + 1));
}
