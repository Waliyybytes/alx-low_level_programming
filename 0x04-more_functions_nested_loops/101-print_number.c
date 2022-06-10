#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_number- this is a function to check for a digit
 *
 * @n:number to print
 */

void print_number(int n)
{
	int i;
	int cuns;

	for (i = 0; i < n; i *= 10)
		cuns = i;

	while (cuns != 0)
	{
		_putchar('0' + n / cuns);
		n %= cuns;
		cuns /= 10;
	}
	_putchar('\n');
}
