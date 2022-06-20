#include "main.h"
#include "reverse.h"
#include  <string.h>
/**
 * *infinite_add -to add inifinite numbers
 * @n1: string 1
 * @n2: string 2
 * @r: buffer
 * @size_r: buffer size
 * Return: returns a result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int carry = 0;
	int index = 0;
	int next = 0;
	char *sum;

	reverseArray(n1);
	reverseArray(n2);
	while (1)
	{
		int sum_two = carry;

		if (n1[index])
		{
			sum_two += n1[index] - '0';
			index++;
		}
		if (n2[next])
		{
			sum_two += n2[next] - '0';
			next++;
		}
		sum[i] = sum_two % 10 + '0';
		i++;
		carry = sum_two / 10;
		if (n1[index] == 0 && n2[next] == 0)
			break;
	}
	if (carry)
		sum[i] = carry + '0';
	reverseArray(sum);
	if ( i > size_r)
		return (0);
	else
		return (sum);


}

