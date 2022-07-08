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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL && va_arg(ap, char *) != NULL)
			printf("%s%s", va_arg(ap, char *), separator);
		else if (i != (n - 1) && separator != NULL && va_arg(ap, char *) == NULL)
			printf("%s%s", "(nil)", separator);
		else if (i == (n - 1) && va_arg(ap, char *) == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}
