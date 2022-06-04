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
	}
	int j = 65;

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);

}
