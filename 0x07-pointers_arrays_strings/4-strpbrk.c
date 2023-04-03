#include "main.h"

/**
 * _strpbrk - function for point of entry
 * @s: value input
 * @accept: value input
 * Return: 0 (pass)
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;

	}
	return ('\0');
}

