#include "main.h"

/**
 * _strlen - Function returning the length of a string
 * @s: input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
