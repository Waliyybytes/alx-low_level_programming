#include "main.h"
/**
 * print_binary - function
 * @n: convert to dec
 *
 * Return: returned equivalent decimal
 */
int print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
