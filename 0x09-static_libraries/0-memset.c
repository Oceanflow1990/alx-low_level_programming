#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: num. of byteto be changed
 *
 * Return: changed array with new values or n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
