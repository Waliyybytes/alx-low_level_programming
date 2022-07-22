#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness- function to check machine's endianess
 *
 * Return: 0 for BE, 1 for LE
 */

int get_endianness(void)
{
	unsigned int test_int = 1;
	char *endian_check = (char *)&test_int;

	if (*endian_check)
		return (1);
	else
		return (0);
}
