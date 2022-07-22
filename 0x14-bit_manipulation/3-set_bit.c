#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * set_bit - function
 * @n: convert to dec
 * @index: index position
 * Return: returned equivalent decimal
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = sizeof(unsigned long int) * 8;
	unsigned int count = 1;

	while (tmp >> 1)
	{
		count++;
		tmp = tmp >> 1;
	}
	if (index > count)
		return (-1);
	*n  =  *n | (1 << index);
	if (*n <= 0)
		return (1);
	else
		return (-1);
}

