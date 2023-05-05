#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int p;
	char *a;

	p = 1;
	a = (char *) &p;

	return ((int)*a);
}
