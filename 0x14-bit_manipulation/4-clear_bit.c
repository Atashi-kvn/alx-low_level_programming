#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 67)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
