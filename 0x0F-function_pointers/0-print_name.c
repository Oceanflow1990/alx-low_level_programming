#include "function_pointers.h"

/**
 * print_name - Function tuat print a mname
 * @name: given name
 * @f: function of the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
