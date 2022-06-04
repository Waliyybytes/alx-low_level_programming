#include <stdio.h>
/**
 * main - Entry point , prints combinations of double digits
 *
 * Return: Always zero(success)
 */

int main(void)
{
	int k = 0;

	while (k < 9)
	{

		int i = 49 + k;
		int j = 48 + k;

		while (i < 58)
		{
			if (j != i)
			{
				putchar(j);
				putchar(i);
			}
			i++;
			if (k == 8)
				break;
			putchar(44);
			putchar(32);
		}
		k++;
	}

	putchar(10);

	return (0);

}
