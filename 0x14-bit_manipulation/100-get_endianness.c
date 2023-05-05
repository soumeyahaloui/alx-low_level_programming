#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/* If the least significant byte of int is 1, the machine is little endian */
	if (*c)
		return (1);
	else
		return (0);
}
