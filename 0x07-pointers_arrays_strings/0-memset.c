#include "main.h"

/**
 * _memset - Function that fill a block of memory with a specific value
 * @s: address if memory ro be filled
 * @b: value desired
 * @n: byte number to be changed.
 * Return: new vlue for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
