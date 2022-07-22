#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * power - function
 * @x: power
 * @y: exponent
 * Return: Return unsigned int
 */

unsigned int power(int x, int y)
{
	int i;
	int product = 1;

	for (i = 0; i < y; i++)
	{
		product *= x;
	}
	return (product);
}


/**
 * binary_to_uint - function
 * @b: binary to convert
 *
 * Return: returned equivalent decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int i = 0, dec = 0;
	unsigned long int exp = strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec += (b[i] - '0') * power(2, exp);
		exp--;
	}
	return (dec);
}
