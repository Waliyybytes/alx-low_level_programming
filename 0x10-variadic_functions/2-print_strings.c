#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - to print strings
 * @n: member
 * @separator: separator to include
 * Return: sum of its parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (i != (n - 1) && separator != NULL)
			printf("%s%s", ((s == NULL) ? "(nil)" : s), separator);
		else
			printf("%s", ((s == NULL) ? "(nil)" : s), separator);
	}
	printf("\n");
	va_end(ap);
}
