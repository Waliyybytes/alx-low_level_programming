
#include <string.h>
/**
 * reverse_array - function to reverse elements of an array
 *
 * @a: array to reverse
 * @n: number of elements in array
 * Return: returns nothing
 */

void reverseArray(char a[])
{
	int i;
	int len = strlen(a);
	int temp;
	char *p = a;

	for (i = 0; i < len; i++)
	{
		temp = p[i];
		p[i] = p[len - 1];
		p[len - 1] = temp;
		len--;
	}

}
