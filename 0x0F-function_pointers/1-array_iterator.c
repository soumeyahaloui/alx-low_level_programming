#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - iterates over an array and performs an action on each element
 *@array: array to iterate
 *@size: size of the array
 *@action: pointer to function to perform the action (e.g. print in regular or hex)
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
