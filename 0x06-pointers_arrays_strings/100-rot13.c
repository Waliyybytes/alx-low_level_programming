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
	char *lower =  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
		+ "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int lon = strlen(lower);
	char temp;
	int j;

	i = 0;
	while (isalpha(s[i]))
	{
		j = 0;
		while (j < lon)
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
