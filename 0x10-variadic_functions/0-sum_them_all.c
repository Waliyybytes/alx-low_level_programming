#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - to add them all
 * @n: member
 *
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
		sum = sum + i;
	va_end(ap);
	return (sum);
}
