#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - Iterates over an array, performs an action on each element.
 *@array: Array to iterate.
 *@size: Size of the array.
 *@action: Function pointer for the action (e.g., print in regular or hex).
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
