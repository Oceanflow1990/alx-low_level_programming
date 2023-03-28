#include "main.h"

/**
 * puts2 - function to print on character out of tw
 * @str: input
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	int r = 0;
	char *w = str;
	int o;

	while (*w != '\0')
	{
		y++;
		i++;
	}
	r = i - 1;
	for (o = 0 ; o <= r ; o++)
	{
		if (o % 2 == 0)
	{
			_putchar([o]);
	}
	}
	_putchar('\n');
}
