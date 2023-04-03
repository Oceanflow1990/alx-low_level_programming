#include "main.h"

/**
 * _strchr - Function fo point of entry
 * @s: input value
 * @c: input value
 * Return: 0 (pass)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
