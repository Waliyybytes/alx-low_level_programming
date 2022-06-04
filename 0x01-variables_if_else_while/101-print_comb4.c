#include <stdio.h>
/**
 * main - Entry point , prints  three digits combinations
 *
 * Return: Always zero(success)
 */

int main(void)
{
	int k = 48;

	while (k < 56)
	{
		int j = 49;

		while (j < 57)
		{

			int i = 50;

			while (i < 58)
			{
				if ((i + j) != (j + k) &&  (j + k) != (k + i) && (i != j) && (j != k) &&
						(k != i) && (k < j) && (j < i))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (k == 58)
						break;
					putchar(44);
					putchar(32);

				}
				i++;
			}
			j++;
		}
		k++;
	}
	putchar(10);
	return (0);

}
