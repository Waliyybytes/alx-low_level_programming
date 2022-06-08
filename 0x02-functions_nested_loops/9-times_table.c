#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * times_table- this is a function to print every minute of the day
 *
 * Return: 0 is success
 *
 */

void times_table(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			int prod = i * j;
			if (prod > 9)
				_putchar('0' + prod / 10);
			_putchar('0' + prod % 10);
			if (i !=9)
				_putchar(44);
			_putchar(32);
			if (prod < 10)
				_putchar(32);
		}
		_putchar(10);
	}
}
