#include "main.h"
#include <string.h>

/*
 * *leet(char *) - to encode some letters
 *
 * @s: string to encode
 * Return : an encoded string
 */

char *leet(char *s)
{
	int i;
	int len = strlen(s);

	for ( i = 0; i < len; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 4;
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = 3;
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = 0;
		if (s[i] == 't' || s[i] == 'T')
			s[i] = 7;
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = 1;
	}

	return (s);
}
