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

int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }

}
