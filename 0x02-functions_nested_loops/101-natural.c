#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * multiple_sum- this is a function  to compute a sum
 *
 * Return: 0 is success
 *
 */

int multiple_sum(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	return (sum);
}
