#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(unsigned long int) * 8;
	int i;

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
