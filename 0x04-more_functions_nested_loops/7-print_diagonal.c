#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_diagonal- this is a function to check for a digit
*
* @n: given length of line
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j < i; j++)
			_putchar(' ');
	}
	_putchar('\n');
}
