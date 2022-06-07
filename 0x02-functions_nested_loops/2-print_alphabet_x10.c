#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10- this is a function that print alphabets in lower case
 *
 * Return: 0 is success
 *
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
