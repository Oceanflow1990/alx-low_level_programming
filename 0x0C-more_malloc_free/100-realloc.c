#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to  the memory previous;y allocated
 * @old_size: is the size in bytes
 * @new_size: the new size in bytes
 *
 * Return: pointer allocate new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
			return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		s[i] = oldp[i];
	free(ptr);
	return (s);
}
