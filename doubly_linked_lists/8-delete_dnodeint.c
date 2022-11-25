#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list
 *@head: pointer to pointer
 *@index: index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		if ((*head->next) == NULL)
			return (-1);
		i++;
		*head = (*head)->next;
	}

	(temp->next)->prev = temp->prev;
	(temp->prev)->next = temp->next;

	free(temp);
	return (-1);
}
