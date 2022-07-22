#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - function
 * @n: convert to dec
 * @index: index position
 * Return: returned equivalent decimal
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int tmp = n;
	unsigned int count = sizeof(unsigned long int) * 4;

	if (index > count)
		return (-1);
	n = n >> index;
	return (n & 1);
}

