#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -computes the factorial of a number
 *
 * @x: number
 * @y: power
 * Return: power of number x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));

}

