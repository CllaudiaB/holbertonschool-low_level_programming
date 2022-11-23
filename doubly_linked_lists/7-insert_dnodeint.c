#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 *@h: pointer to pointer
 *@idx: index of the list where the new node should be added
 *@n: number
 *
 *Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (*h == NULL)
		return (NULL);

	temp = *h;

	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		i++;
		temp = temp->next;
	}

	if (temp != NULL)
	{
		new->next = temp->next;
		new->prev = temp;

		if (new->next != NULL)
			(temp->next)->prev = new;
		temp->next = new;
	}

	return (new);
}
