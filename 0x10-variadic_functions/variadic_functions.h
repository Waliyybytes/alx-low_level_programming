#ifndef VARIADIC_POINTERS_H
#define VARIADIC_POINTERS_H
#include <stdarg.h>

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

void print_string(va_list);

void print_all(const char * const format, ...);
#endif
