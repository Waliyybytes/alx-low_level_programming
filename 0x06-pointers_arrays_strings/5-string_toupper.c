#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *string_toupper - function to change to uppercase
 *
 * @s: string to captilalize
 * Return: returns a pointer to the string
 */

char *string_toupper(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = s[i] - ' ';
	}
	return (s);
}
