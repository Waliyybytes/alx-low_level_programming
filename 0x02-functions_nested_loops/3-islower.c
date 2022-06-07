#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower- this is a function to check lower case
 *
 * Return: 1 is success
 *
 */

int _islower(int c);
{
	if(islower(c))
		return (1);
	else
		return (0);

}

