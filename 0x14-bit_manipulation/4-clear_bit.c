#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function
 * @n: number giben
 * @index: index position
 * Return: 1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = sizeof(unsigned long int) * 8;

	if (index > count)
		return (-1);
	*n  =  *n & ~(1 << index);

	return (1);
}

