#include "function_pointers.h"

/**
 * array_iterator - a function as a par. on each elem. array
 * @array: array to execute function
 * @size: iss the size of the array
 * @action: is a pointer
 *
 * Return: coid
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
