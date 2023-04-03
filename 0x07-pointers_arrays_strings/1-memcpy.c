#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: stored to
 * @src: copied from
 * @n: number of bytes used
 * Return: copied memory with n byted
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] - src[j];
		n--;
	}
	return (dest);
}
