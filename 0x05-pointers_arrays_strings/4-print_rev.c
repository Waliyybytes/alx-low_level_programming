#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * print_rev - prints to stdout with a new line
 *
 * @str: string to reverse
 * Return: nothing
 */

void print_rev(char *str)
{
	int i;

	for (i = strlen(str) - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');

}

