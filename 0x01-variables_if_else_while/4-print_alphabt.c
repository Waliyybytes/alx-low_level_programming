#include <stdio.h>
/**
 * main - Entry point , prints alphabets
 *
 * Return: Always zero(success)
 */

int main(void)
{

	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
		if (i == 101 || i == 113)
			continue;
	}
	putchar(10);

	return (0);

}
