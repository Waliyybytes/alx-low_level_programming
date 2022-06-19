#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * *rot13 - to encode some string
 *
 * @s: string to encode
 * Return: an encoded string
 */

char *rot13(char *s)
{
	int i;
	char *lower =  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int lon = strlen(lower);
	char temp;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		temp = s[i];
		while (j < lon && isalpha(s[i]))
		{
			if (s[i] == lower[j] && ((j >= 0 && j < 26) || (j >= 52 && j < 78)))
			{
				temp = lower[j + 13];
			}
			j++;
		}
		s[i] =  temp;
		i++;
	}
	return (s);
}
