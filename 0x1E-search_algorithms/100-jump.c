#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for value in sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	int jump = sqrt(size);
	int left = 0, right = 0;

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	right = (right < (int)size) ? right : (int)size - 1;

	for (int i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
