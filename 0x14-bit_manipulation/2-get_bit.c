#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit value to get
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Shift the number to the right index and get the least significant bit */
	return ((n >> index) & 1);
}
