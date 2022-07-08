#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - to add them all
 * @n: member
 *
 * Return: 0 for success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = arg1; i >= 0; i = va_arg(ap, int))
		sum = sum + i;
	va_end(ap);
	return (sum);
}
