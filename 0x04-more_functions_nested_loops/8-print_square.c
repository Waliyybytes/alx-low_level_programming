#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_square- this is a function to check for a digit
*
* @n: given length of square
*/

void print_square(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
			if (j == n)
				_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
