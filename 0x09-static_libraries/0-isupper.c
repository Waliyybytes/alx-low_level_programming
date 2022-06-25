#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper- this is a function to check upper case
 *
 * @c: character to be checked
 * Return: 1 is success
 *
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

