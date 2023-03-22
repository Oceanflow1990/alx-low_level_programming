#include "main.h"

/**
 * main - function to print
 * _islander - function to prints loower case
 * @c: parameter to be printed
 *
 * Return: 1 if it is a lower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
