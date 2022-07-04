#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main- prints name of the current file
 *
 * Return: 0 for success
 */

int main(void)
{
	char *s = __FILE__;
	size_t i = strlen(s);

	while (s[i] != '/')
		i--;
	i++;
	for (; i < strlen(s); i++)
		_putchar(s[i]);
	return (0);
}



