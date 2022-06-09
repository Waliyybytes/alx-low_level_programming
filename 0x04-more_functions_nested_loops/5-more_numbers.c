#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_more_numbers- this is a function to check for a digit
 *
 */

void print_more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 9)
				_putchar('1')
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
