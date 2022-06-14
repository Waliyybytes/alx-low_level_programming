#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
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
	int len = strlen(s);

	if (strlen(s) == 0)
		return (0);
	while (!isdigit(s[i]))
	{
		if (s[i] == '-')
			count++;
		i++;
		if (i == len)
			return (0);
	}

	while (isdigit(s[i]))
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10  && s[i] - '0' > 7))
		{
			if (count % 2 != 0)
				return (INT_MIN);
			else
				return (INT_MAX);
		}
		res = res * 10 + s[i] - '0';
		i++;
	}
	if (count % 2 != 0)
		return (-1 * res);
	else
		return (res);
}

