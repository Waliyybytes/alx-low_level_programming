#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * puts_half - prints second half of a string
 *
 * @str: string to reverse
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len ; i++)
			_putchar(str[i]);
	}

	else
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
	_putchar('\n');

}

