#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of element
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of element in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (0);
}
