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
	_putchar('0' + _abs(c) % 10);
	return (_abs(c) % 10);
}
