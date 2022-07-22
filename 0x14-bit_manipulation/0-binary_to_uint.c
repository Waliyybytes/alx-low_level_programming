#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: binary to convert
 *
 * Return: returned equivalent decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, digit, dec = 0, i = 0;

	if (b == NULL)
		return (0);
	n = atoi(b);
	while (n != 0)
	{
		digit = n % 10;
		dec += digit << i;
		n = n / 10;
		i++;
	}
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (dec);
}
