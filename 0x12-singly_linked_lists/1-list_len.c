#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show the no. of element of a list
 * @h: linked list
 *
 * Return: the no. of elements of al list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
