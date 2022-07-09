#ifndef VARIADIC_POINTERS_H
#define VARIADIC_POINTERS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);


void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct formt_prnt- struct format
 * @ltr: letter to check
 * @p: pointer to function
 */

typedef struct formt_prnt
{
	char ltr;
	void (*p)(va_list ap);
} prt_fmt;

void print_char(va_list);

void print_integer(va_list);

void print_float(va_list);

/**
 * print_string - to print a string
 * @ap: variadic list
 * Return: nothing
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("%s", "(nil)");
		exit(EXIT_FAILURE);
	}
	printf("%s", s);
}

void print_all(const char * const format, ...);
#endif
