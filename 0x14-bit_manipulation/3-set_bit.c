#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number whose bit value to set
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Set the bit at the given index using bitwise OR */
	*n |= (1ul << index);

	return (1);
}
