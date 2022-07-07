#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
