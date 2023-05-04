#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * unsigned int
 * @b: binary
 * dec is the variable to hold the decimal format
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			value = (value << 1) | 1;
		else if (*b == '0')
			value <<= 1;
		else
			return (0);
		b++;
	}

	return (value);
}
