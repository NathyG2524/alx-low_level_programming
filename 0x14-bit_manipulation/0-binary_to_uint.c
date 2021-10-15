#include "main.h"

/**
 *binary_to_unit - a function that converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Returns: the converted number or null
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' && b[i] > '1')
			return (0);
		conv = 2 * conv + (b[i] - '0');
	}
	return (conv);
}
