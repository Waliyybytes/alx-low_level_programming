#include "main.h"
#include <string.h>


/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int dummy;

	for (i = 0; i < len; i++)
	{
		dummy = s[i];
		s[i] = s[len - 1];
		s[len - 1] = dummy;
		len--;
	}
}

