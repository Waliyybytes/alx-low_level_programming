#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- this is a function that print alphabets in lower case
 *
 * Return: 0 is success
 *
 */

void print_alphabet(void)
{
	for (int j = 0; j < 10; j++)
	{
		for (int i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
