#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value;
	char *p;

	value = 1;
	p = (char *) &value;

	return ((int)*p);
}
