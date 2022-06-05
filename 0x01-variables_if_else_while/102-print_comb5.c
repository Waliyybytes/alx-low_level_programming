#include <stdio.h>
/**
 * main - Entry point , prints  two two-digits combinations
 *
 * Return: Always zero(success)
 */
int main(void)
{
	int l = 48;

	while (l < 58)
	{
		int k = 48;

		while (k < 58)
		{
			int j = 48;

			while (j < 58)
			{
				int i = 48;

				while (i < 58)
				{
					if ((l * 10 + k) < (j * 10 + i))
					{
						putchar(l);
						putchar(k);
						putchar(32);

						putchar(j);
						putchar(i);

						if (l * 10 + k == 626)
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
		l++;
	}
	putchar(10);
	return (0);
}
