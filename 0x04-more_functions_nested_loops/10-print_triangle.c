#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_triangle- this is a function to check for a digit
*
* @size: given size of triangle
*/

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (i >= j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
