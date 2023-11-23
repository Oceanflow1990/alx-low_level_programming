#include "main.h"
#include <stdlib.h>

/**
 * _calloc - unction that allocates memory for an array, using malloc
 * @nmemb: input value
 * @size: input value
 *
 * Return: pointer to allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
