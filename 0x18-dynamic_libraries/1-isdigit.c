#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit- this is a function to check for a digit
 *
 * @c: character to be checked
 * Return: 1 is success
 *
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

