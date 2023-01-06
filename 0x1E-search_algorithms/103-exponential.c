#include "search_algos.h"
void print_array(int *array, int l, int r);
int binary_search_exp(int *array, int l, int r, int value);
/**
 * exponential_search - exponential search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, low = 0;

	if (!array)
		return (-1);
	while (array[bound] < value && bound < (int) size - 1) {
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound = bound * 2 < (int) size - 1 ? bound * 2 : (int) size - 1;
	}

	low = bound % 2 == 0 ? bound / 2 : bound / 2 + 1;
	printf("Value found between indexes [%d] and [%d]\n", low, bound);
	return (binary_search_exp(array, low, bound, value));
}
/**
 * binary_search - binary search
 * @array: array to search
 * @l: left bound
 * @r: right bound
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */
int binary_search_exp(int *array, int l, int r, int value)
{
	int mid;

	while (array && l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
/**
 * print_array - print array for binary search
 * @array: array to print
 * @l: left bound
 * @r: right bound
 */
void print_array(int *array, int l, int r)
{
	printf("Searching in array: ");
	while (l < r)
		printf("%d, ", *(array + l++));
	printf("%d\n", *(array + r));
}
