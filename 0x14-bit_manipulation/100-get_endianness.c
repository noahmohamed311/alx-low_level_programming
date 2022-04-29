#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 *
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c + '0');
}
