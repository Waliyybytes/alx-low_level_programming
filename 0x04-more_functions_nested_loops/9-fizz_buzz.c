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
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0 && i != 100)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i != 100)
			printf("%d ", i);
		else
			printf("Fizz\n");
	}
	return (0);
}
