#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <limits.h>
/**
 * print_number- this is a function to check for a digit
 *
 * @n:number to print
 */

void print_number(int n)
{
	int i;
	int cuns;
	int rem = 0;
	int quot;

	if (n > 0 || n < 0)
	{
		if (n > 999999999 || n < -1000000000)
		{
			quot =  INT_MAX / 10;
			rem = INT_MAX / 10;
			if (n < 0)
				putchar('-');
			cuns = 100000000;
			n = quot;
		}
		else
		{
			int a = n;

			if (a < 0)
			{
				n = -n;
				_putchar('-');
			}
			for (i = 1; i <= n; i *= 10)
				cuns = i;
		}
		while (cuns != 0)
		{
			_putchar('0' + n / cuns);
			n %= cuns;
			cuns /= 10;
		}
		_putchar('0' + (n > 0 ? rem : rem + 1));
	}
	else
		_putchar('0' + n % 10);
}


