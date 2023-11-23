#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: input value
 * @max: input value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, l;
	int *s;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	s = malloc(sizeof(int) * l);
	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		s[i] = min++;
	return (s);
}
