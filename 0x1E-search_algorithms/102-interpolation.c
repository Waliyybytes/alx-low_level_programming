#include "search_algos.h"
/**
 * interpolation_search - function
 * @array: array
 * @size: array size
 * @value: value to search 
 * Return: value's index or -1 if not found
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	
	while (array && array[high] != array[low] && low < high) 
	{
		mid = low + ((value - array[low]) * ((double)(high - low) / (array[high] - array[low])));
		if (mid >= (int) size)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}

