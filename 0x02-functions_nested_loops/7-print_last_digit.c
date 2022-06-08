#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit- this is a function to check lower case
 *
 * @c: character to be checked
 * Return: 0 is success
 *
 */

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		_putchar('0' + abs(c));
	else
		_putchar('0' + c);
	return (abs(c));
}
