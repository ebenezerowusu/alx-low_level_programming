#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: 0s and 1s
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int lenght, binary;

	if (!b)
		return (0);

	value = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, binary = 1; lenght >= 0; lenght--, binary *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			value += binary;
		}
	}

	return (value);
}
