#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function
 * @array: array
 * @size: array size
 * @value: value to search 
 * Return: value's index or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int l = 0, r = 0;
	int m = (int) sqrt(size);

	while (array)
	{
		if (r >= (int) size || array[r] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", l, r);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", r, array[r]);
		l = r;
		r += m;
	}
	while (l <= r && l < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}
	return (-1);
}
