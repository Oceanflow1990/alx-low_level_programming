#include "main.h"

/**
 * _strlen - the length of string
 * @s: char to check
 * Return: 0;
 */

int _strlen(char *s)
{
	int a = 0; /* Start the cpounter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
