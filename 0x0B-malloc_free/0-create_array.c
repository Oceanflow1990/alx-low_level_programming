#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: input size of the array in int
 * @c: store the strings of xters
 *
 * Return: pointer to the base
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
