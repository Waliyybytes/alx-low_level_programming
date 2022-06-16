#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *leet - to encode some letters
 *
 * @s: string to encode
 * Return: an encoded string
 */

char *leet(char *s)
{
	int i;
	int len = strlen(s);
	char encode[] = {'a', 'A', '4', '4', 'e', 'E', '3',
		'3', 'o', 'O', '0', '0', 't', 'T', '7', '7', 'l', 'L', '1', '1'};
	int j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (encode[j] == s[i] && isalpha(encode[j]))
				s[i] = encode[j + 2];
		}
	}
	return (s);
}
