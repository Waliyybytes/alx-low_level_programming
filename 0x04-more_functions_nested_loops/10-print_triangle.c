#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_triangle- this is a function to check for a digit
*
* @n: given length of triangle
*/

void print_triangle(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = n; j > 0; j--)
		{
			if (i >= j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
