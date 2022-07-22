#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function
 * @n: first number 
 * @m: second number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int res;

	res = n ^ m;
	while (res != 0)
	{
		if (res & 1)
			count++;
		res = res >> 1;
	}	

	return (count);
}

