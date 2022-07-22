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
	*n  =  *n | (1 << index);
	if (*n < 0)
		return (1);
	else
		return (-1);
}

