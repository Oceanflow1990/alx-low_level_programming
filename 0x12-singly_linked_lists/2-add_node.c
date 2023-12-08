#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Add a new node at the begining of a list
 * @head: the orignal linked list
 * @str: the string
 *
 * Return: the address of the new list or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = head;
	*head = temp;
	return (temp);
}
