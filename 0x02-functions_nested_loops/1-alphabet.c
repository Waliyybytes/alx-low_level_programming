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
	char alpha_low_case = "abcdefghijklmopqrstuvwxyz"
	int i;

	for (i = 0; alpha_low_case[i]; i++)
		_putchar(alpha_low_case[i]);
	_putchar('\n');
}
