#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory where input is stored
 * @src: nemeory where input is copied to
 * @n: number of bytes
 *
 * Return: copied memepry with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}
