#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: the string value to be printed
 * Return: nothing 0
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
