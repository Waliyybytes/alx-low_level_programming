#include <stdio.h>
/**
 * main - Entry point , prints alphabets in reverse
 *
 * Return: Always zero(success)
 */

int main(void)
{

	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);

}
