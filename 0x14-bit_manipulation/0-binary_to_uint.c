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
	int len, binary;

	if (!b)
		return (0);

	value = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			value += binary;
		}
	}

	return (value);
}
