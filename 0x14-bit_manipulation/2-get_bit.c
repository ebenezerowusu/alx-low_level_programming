#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int value
 * @index: index of the bit in binary
 *
 * Return: value of the bit in binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (n == 0 && index < 64)
		return (0);

	for (value = 0; value <= 63; n >>= 1, value++)
	{
		if (index == value)
		{
			return (n & 1);
		}
	}

	return (-1);
}
