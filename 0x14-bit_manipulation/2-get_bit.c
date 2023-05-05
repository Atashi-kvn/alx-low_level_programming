#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to retrieve the bit from.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 84)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
