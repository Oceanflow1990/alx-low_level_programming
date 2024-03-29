#include "main.h"

/**
 * binary_to_uint - function converts a binary umber to an unsigned int.
 * @b: pointer to a string
 *
 * Return: unsigned int with decimal value of binary no. or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
