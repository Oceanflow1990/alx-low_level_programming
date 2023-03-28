#include "main.h"

/**
 * puts2 - Function to print one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[1] != '\n'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue
	}
	_putchar('\n');
}
