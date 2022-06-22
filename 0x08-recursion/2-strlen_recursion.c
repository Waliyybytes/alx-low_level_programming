#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints a string
 *
 * @s: character to get length
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));

	else
		return (0);
}

