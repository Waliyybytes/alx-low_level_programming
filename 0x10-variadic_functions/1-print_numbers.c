#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - to print numbers
 * @n: member
 * @separator: separator to include
 * Return: sum of its parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n <= 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("\n");
	va_end(ap);
}
