#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers using
 *                        the interpolation search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1 if value is not found
 *         or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while ((array[low] != array[high]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (mid < low || mid > high)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}

	printf("Value checked array[%ld] is out of range\n", low);
	return (-1);
}
