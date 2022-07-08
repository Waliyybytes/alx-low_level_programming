#include <stdlib.h>
#include  "3-calc.h"
#include <stdio.h>

/**
 * op_add- perform addition
 * @a: first parameter
 * @b: second parameter
 * Return: result of operation
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_mul- perform multiplication
 * @a: first parameter
 * @b: second parameter
 * Return: result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_sub- perform subtraction
 * @a: first parameter
 * @b: second parameter
 * Return: result of operation
 */

int op_sub(int a, int b)
{
	return (abs(a * b));
}


/**
 * op_div- perform division
 * @a: first parameter
 * @b: second parameter
 * Return: result of operation
 */


int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}


/**
 * op_mod- perform modulo
 * @a: first parameter
 * @b: second parameter
 * Return: result of operation
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}



