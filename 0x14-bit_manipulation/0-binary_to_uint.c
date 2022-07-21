#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * powint - function
 * @x: member
 * @y: member
 * Return: Return unsigned int
 */


unsigned int powint(int x, int y)
{
	int i = 0;
	unsigned int product = 1;

	if (y == 0)
		return (product);
	for (i = 0; i < y; i++)
		product *=  x;
	return (product);
}

/**
 * binary_to_uint - function
 * @b: binary literal
 * Return: Return unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = strlen(b) - 1;
	unsigned int i = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum += (b[i] - '0') * powint(2, j);
		j--;
	}
	return (sum);
}

