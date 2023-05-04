#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	/* Find the highest power of 2 that is <= n */
	while ((mask << 1) <= n)
		mask <<= 1;

	/* Print the binary representation */
	for (i = 0; mask != 0; mask >>= 1, i++)
		_putchar((n & mask) ? '1' : '0');

	/* If n is 0, print a single 0 */
	if (i == 0)
		_putchar('0');
}
