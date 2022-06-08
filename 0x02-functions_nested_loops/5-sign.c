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
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);

}

