#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer- this is a function to print every minute of the day
 *
 * Return: 0 is success
 *
 */

void jack_bauer(void)
{
	int j;

	for (j = 0; j < 24; j++)
	{
		for (int i = 0; i < 60; i++)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar(58);
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar('\n');

		}
	}
	return (0);
}
