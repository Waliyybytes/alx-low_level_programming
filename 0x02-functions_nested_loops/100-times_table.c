#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_times_table- this is a function to prints times
 * table of number n betwen 0 and 15
 * @n : charcter to be given
 * Return: 0 is success
 *
 */

void print_times_table(int n)
{
	int j;

	if (n >= 0 && n < 15)
	{
		for (j = 0; j < n + 1; j++)
		{
			int i;

			for (i = 0; i < n + 1; i++)
			{
				int prod = i * j;

				if (prod >= 100)
					_putchar('0' + prod / 100);
				if (prod >= 10)
					_putchar('0' + (prod % 100) / 10);
				_putchar('0' + prod % 10);
				if (i != n)
				{
					_putchar(44);
					_putchar(32);
				}
				if (j * (i + 1) < 100 && i != n)
					_putchar(32);
				if (j * (i + 1) < 10 && i != n)
					_putchar(32);
			}
			_putchar(10);
		}
	}
}
