#include <stdio.h>
/**
 * main - Entry point , prints combinations of single digits 
 *
 * Return: Always zero(success)
 */

int main(void)
{

	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);

	return (0);

}
