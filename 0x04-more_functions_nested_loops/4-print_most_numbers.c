#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_numbers- this is a function to check for a digit
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
