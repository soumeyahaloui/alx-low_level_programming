#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not present
 *
 * Description: Jump search algorithm searches a sorted array by jumping
 * ahead fixed steps and then linearly searching backwards to find the exact
 * location. This implementation prints elements checked and the search range.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, left, right;
	size_t idx;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = jump;

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (idx = left; idx <= (size - 1) && idx <= (size_t)right; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
