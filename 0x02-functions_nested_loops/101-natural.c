#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * compute- this is a function  to compute a sum
 *
 * Return: 0 is success
 *
 */

int compute(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	return (sum);
}
