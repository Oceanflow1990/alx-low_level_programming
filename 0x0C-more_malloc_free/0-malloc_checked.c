#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: size of allocation
 * Return: 0 (pass)
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if  (d == NULL)
		exit(98);
	return (d);
}
