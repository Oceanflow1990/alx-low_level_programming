#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: the string value to be printed
 * Return: 0 (pass)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
}
