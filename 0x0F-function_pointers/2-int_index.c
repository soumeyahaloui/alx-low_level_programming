#include "function_pointers.h"
/**
 *int_index - Returns index if comparison is true, else -1.
 *@array: Array to search.
 *@size: Size of the array.
 *@cmp: Pointer to comparison function.
 *Return: Index or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
