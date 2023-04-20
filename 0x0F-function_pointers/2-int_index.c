#include "function_pointeres.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: array of thefunction
 * @size: size of the array
 * @cmp: pointer
 * Return: 0 (pass)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
