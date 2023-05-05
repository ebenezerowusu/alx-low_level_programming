#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index
 * @n: pointer 
 * @index: index of the bit.
 *
 * Return: 1 worked, -1 if if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
		return (-1);

	value = 1 << index;

	if (*n & value)
		*n ^= value;

	return (1);
}
