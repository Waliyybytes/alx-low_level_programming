#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- this is a function  to compute a sum
 *
 * Return: a value of sum is success
 *
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	return (sum);
}
