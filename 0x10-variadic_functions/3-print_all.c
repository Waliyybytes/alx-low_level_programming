#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - to print different data types
 * @format: predefined format of variadic list
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *p = "";
	unsigned int i, j;
	prt_fmt print_arr[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};
	va_start(ap, format);
	j = 0;
	while (format[j])
	{
		i = 0;
		while (i < 4)
		{
			if (print_arr[i].ltr == format[j])
			{
				printf("%s", p);
				print_arr[i].p(ap);
				p = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_char - to print char
 * @ap: variadic list
 * Return: nothing
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - to print integer
 * @ap: variadic list
 * Return: nothing
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - to print a float
 * @ap: variadic list
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

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

