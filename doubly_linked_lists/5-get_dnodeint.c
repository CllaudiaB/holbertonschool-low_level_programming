#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 *@head: pointer
 *@index: index of the node, starting from 0
 *
 *Return:  the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
			break;
	}
	return (head);
}
