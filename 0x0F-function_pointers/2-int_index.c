#include "function_pointers.h"

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

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
