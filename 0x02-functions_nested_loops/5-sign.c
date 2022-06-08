#include <stdio.h>
#include "main.h"
/**
 * print_sign- this is a function to check the sign of a number
 *
 * @n: character to be checked
 * Return: 1 is success
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}

