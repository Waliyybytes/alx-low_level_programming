#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha- this is a function to check if its alphabet
 *
 * @c: character to be checked
 * Return: 1 is success
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}

