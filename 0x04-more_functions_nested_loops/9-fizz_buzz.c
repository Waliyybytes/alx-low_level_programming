#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main- a FizzBuzz test
 *
 * Return: 0 is success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i < 100)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	_putchar('\n');

	return (0);
}
