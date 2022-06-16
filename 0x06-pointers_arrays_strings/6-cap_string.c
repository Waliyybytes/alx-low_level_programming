#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * *cap_string- function to change to uppercase
 *
 * @s: string to captilalize
 * Return: returns a pointer to the string
 */

char *cap_string(char *s)
{
	int i;
	int len = strlen(len);
	int j;

	for (i = 0; i < len; i++)
	{
		if (!isalpha(s[i]))
		{
			for (j = 0; j < 13; j++)
			{
				if (sep[j] == s[i])
					s[i + 1] = (char)toupper(s[i + 1]);
			}
		}
		if (s[i] == '\t')
			s[i] = ' ';
		if (isalpha(s[0]))
			s[0] = (char)toupper(s[0]);
	}
	return (s);
}
