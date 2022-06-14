#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi - prints to stdout with a new line
 *
 * @s: string to convert to int
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int count = 0;
	int res = 0;

	while (!isdigit(s[i]))
	{
		if (s[i] == '-')
			count++;
		i++;
	}

	while (isdigit(s[i]))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	if (count % 2 != 0)
		return (-1 * res);
	else
		return (res);
}

