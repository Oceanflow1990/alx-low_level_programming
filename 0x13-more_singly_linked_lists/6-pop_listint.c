#include "lists.h"

/**
 * pop_listint - deltes the head node of a linked list
 * @head: pointer
 *
 * Return: data inside the first element deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
