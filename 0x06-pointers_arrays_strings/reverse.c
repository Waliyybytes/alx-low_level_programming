#include "main.h"
/**
 * reverse_array - function to reverse elements of an array
 *
 * @a: array to reverse
 * @n: number of elements in array
 * Return: returns nothing
 */

void reverseArray(char *a)
{
	int i;
	int len = n;
	int temp;

	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[len - 1];
		a[len - 1] = temp;
		len--;
	}

}
