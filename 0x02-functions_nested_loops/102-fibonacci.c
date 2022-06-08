#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- this is a function to print furst 50 fibonacci numbers
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int next = a + b;

	for (i = 0; i < 50; i++)
	{
		a = b;
		b = next;
		next = a + b;
	}
	return (0);
}
