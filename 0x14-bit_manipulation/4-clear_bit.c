#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number whose bit value to clear
 * @index: the index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Clear the bit at the given index using bitwise AND with a complement */
	*n &= ~(1ul << index);

	return (1);
}
