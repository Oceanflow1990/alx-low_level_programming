#include "main.h"
/**
 * _strlen_recursion - function that return the lenght off string
 * @s: input
 * Return: always return 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len  += _strlen_recursion(s + 1);
	}
	return (len);
}

