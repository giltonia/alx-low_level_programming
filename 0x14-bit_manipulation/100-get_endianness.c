#include "main.h"
/**
 * get_endianness -  checks the endianness on the system.
 *
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int g = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&g)[0]);
	return (little_or_big);
}
